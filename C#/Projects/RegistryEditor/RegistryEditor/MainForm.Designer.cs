namespace RegistryEditor
{
	partial class MainForm
	{
		/// <summary>
		///  Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		///  Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose( bool disposing )
		{
			if( disposing && (components != null) )
			{
				components.Dispose();
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code

		/// <summary>
		///  Required method for Designer support - do not modify
		///  the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			treeView = new TreeView();
			statusBarSS = new StatusStrip();
			statusTSSL = new ToolStripStatusLabel();
			processTSSL = new ToolStripStatusLabel();
			uninstallStringTB = new TextBox();
			labelUninstallCommand = new Label();
			statusBarSS.SuspendLayout();
			SuspendLayout();
			// 
			// treeView
			// 
			treeView.Anchor =  AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
			treeView.Location = new Point( 0, 0 );
			treeView.Name = "treeView";
			treeView.Size = new Size( 788, 396 );
			treeView.TabIndex = 0;
			treeView.AfterSelect += treeView_AfterSelect;
			// 
			// statusBarSS
			// 
			statusBarSS.Items.AddRange( new ToolStripItem[] { statusTSSL, processTSSL } );
			statusBarSS.Location = new Point( 0, 428 );
			statusBarSS.Name = "statusBarSS";
			statusBarSS.Size = new Size( 800, 22 );
			statusBarSS.TabIndex = 1;
			statusBarSS.Text = "statusStrip1";
			// 
			// statusTSSL
			// 
			statusTSSL.Name = "statusTSSL";
			statusTSSL.Size = new Size( 39, 17 );
			statusTSSL.Text = "Ready";
			// 
			// processTSSL
			// 
			processTSSL.Name = "processTSSL";
			processTSSL.Size = new Size( 0, 17 );
			processTSSL.TextAlign = ContentAlignment.MiddleRight;
			// 
			// uninstallStringTB
			// 
			uninstallStringTB.Anchor =  AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
			uninstallStringTB.Location = new Point( 132, 402 );
			uninstallStringTB.Name = "uninstallStringTB";
			uninstallStringTB.ReadOnly = true;
			uninstallStringTB.Size = new Size( 656, 23 );
			uninstallStringTB.TabIndex = 3;
			uninstallStringTB.Click += uninstallStringTB_Click;
			// 
			// labelUninstallCommand
			// 
			labelUninstallCommand.Anchor =  AnchorStyles.Bottom | AnchorStyles.Left;
			labelUninstallCommand.AutoSize = true;
			labelUninstallCommand.Location = new Point( 12, 405 );
			labelUninstallCommand.Name = "labelUninstallCommand";
			labelUninstallCommand.Size = new Size( 114, 15 );
			labelUninstallCommand.TabIndex = 4;
			labelUninstallCommand.Text = "Uninstall command:";
			// 
			// MainForm
			// 
			AutoScaleDimensions = new SizeF( 7F, 15F );
			AutoScaleMode = AutoScaleMode.Font;
			ClientSize = new Size( 800, 450 );
			Controls.Add( labelUninstallCommand );
			Controls.Add( uninstallStringTB );
			Controls.Add( statusBarSS );
			Controls.Add( treeView );
			Name = "MainForm";
			Text = "Registry Editor";
			Load += MainForm_Load;
			statusBarSS.ResumeLayout( false );
			statusBarSS.PerformLayout();
			ResumeLayout( false );
			PerformLayout();
		}

		#endregion

		private TreeView treeView;
		private StatusStrip statusBarSS;
		private ToolStripStatusLabel statusTSSL;
		private ToolStripStatusLabel processTSSL;
		private TextBox uninstallStringTB;
		private Label labelUninstallCommand;
	}
}