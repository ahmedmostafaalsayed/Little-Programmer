using Microsoft.Win32;

namespace RegistryEditor
{
	public partial class MainForm : Form
	{
		/// <summary>
		/// The current uninstallation process.
		/// </summary>
		//private Process UninstallProcess;

		public MainForm()
		{
			InitializeComponent();
		}

		/// <summary>
		/// Populate the TreeView.
		/// </summary>
		private void MainForm_Load( object sender, EventArgs e )
		{
			// Root nodes
			treeView.Nodes.Add( "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall",
				"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall" );
			treeView.Nodes.Add( "SOFTWARE\\WOW6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall",
				"SOFTWARE\\WOW6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall" );

			foreach( TreeNode node in treeView.Nodes )
			{
				string[] subKeys = { };

				RegistryKey key = Registry.LocalMachine.OpenSubKey( node.Name );
				try
				{
					subKeys = key.GetSubKeyNames();
					statusTSSL.BackColor = SystemColors.Control;
				}
				catch( Exception error )
				{
					statusTSSL.BackColor = Color.Orange;
					statusTSSL.Text = error.Message;
				}

				foreach( string subKey in subKeys )
				{
					string friendlyName = subKey;
					if( subKey.StartsWith( '{' ) )
					{
						try
						{
							friendlyName = key.OpenSubKey( subKey ).GetValue( "DisplayName" ).ToString();
						}
						catch( NullReferenceException ) { }
					}

					node.Nodes.Add( subKey, friendlyName );
				}
			}
		}
		public static string GetRegistryKeyName( string name )
		{
			return name.Substring( name.LastIndexOf( '\\' ) + 1 );
		}

		private void treeView_AfterSelect( object sender, TreeViewEventArgs e )
		{
			statusTSSL.Text = e.Node.FullPath;

			// Get the registry key from its full path or the name
			RegistryKey? key = Registry.LocalMachine.OpenSubKey( e.Node.FullPath )
				?? Registry.LocalMachine.OpenSubKey( $"{e.Node.Parent.Name}{Path.DirectorySeparatorChar}{e.Node.Name}" );

			// If the key canno be found, remove the node
			if( key == null )
				e.Node.Remove();
			else
				uninstallStringTB.Text = (string) key.GetValue( "UninstallString" );
		}

		private void uninstallStringTB_Click( object sender, EventArgs e )
		{
			Clipboard.SetText( uninstallStringTB.Text );
		}
	}
}