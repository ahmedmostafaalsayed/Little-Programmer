# Reference: https://pypi.org/project/colorama
from colorama import init, Fore, Back, Style

init()
print(Back.CYAN + Fore.BLUE + "Blue text on light blue background." + Style.RESET_ALL)
print(Back.YELLOW + Fore.RED + "Red text on yellow background." + Style.RESET_ALL)
print("More normal text.")
