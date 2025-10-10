from string import ascii_letters
from random import randint, SystemRandom
from os import system


blue = '\033[94m'
green = '\033[92m'
ocra = '\033[93m'
red = '\033[91m'
endc = '\033[0m'
bold = '\033[1m'
underline = '\033[4m'
darkcyan = '\033[36m'


def varname_creator():
    varname = ''.join(SystemRandom().choice(ascii_letters) for _ in range(randint(8, 12)))
    return varname

def banner():
    # Univers ASCII banner
    print(bold + """                                                                                            
                ███╗   ███╗███████╗███████╗███╗   ███╗ █████╗ ███╗   ██╗██╗ █████╗ 
                ████╗ ████║██╔════╝██╔════╝████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗
                ██╔████╔██║███████╗█████╗  ██╔████╔██║███████║██╔██╗ ██║██║███████║
                ██║╚██╔╝██║╚════██║██╔══╝  ██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔══██║
                ██║ ╚═╝ ██║███████║██║     ██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║  ██║
                ╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝                                                                                                                                                                                                                   
             Version : 3.0   -   Author : Killian CASAROTTO   -  Updated : 10/10/2025           
    """ + endc)
