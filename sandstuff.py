version = "1.12.0"
import pwd, os, subprocess
def yn(question):
    while True:
        YesNoAnswer = input(f'\033[94m{question} (\033[92my\033[94m/\033[91mn\033[94m)\033[0m')
        if YesNoAnswer == 'y' or YesNoAnswer == 'Y':
            return True
        elif YesNoAnswer == 'n' or YesNoAnswer == 'N':
            return False
    def apspace(self, ar, add):
        at = []
        for i in range(len(ar)):
            at.append(f'{ar[i]}{add}')
        return at
def clear(): system('cls' if os.name == 'nt' else 'clear')
username = pwd.getpwuid(os.getuid())[0]
def system(cmd):
    restrip = subprocess.check_output(cmd, shell=True)
    restrip = restrip.decode("utf-8")
    restrip = restrip.strip('\n')
    return restrip
arch = system('uname -m')
def basename(file):
    return system(f'basename "{file}"')
def ynzen(txt):
    try:
        system(f'zenity --question --text="{txt}"')
    except:
        return False
    else:
        return True
def cat(file): return "".join(open(file, "r").readlines())
def dog(file):
    data = open(file, "r").readlines()
    for i in range(len(data)):
        data[i] = data[i].strip('\n')
    return data
def contains(ar, what):
    chk = ar
    for i in range(len(ar)):
        if what == ar[i]:
            return True
    return False
def pbar(what, outof):
    charactor = "█"
    if what == 1: print(charactor)
    else: print(f'{(charactor*what)*2}{("▁"*(outof-what))*2} {what}/{outof}', end='\r')
def get_sv(what):
    return system(f'echo ${what}')
def whereinstr(what, string):
    for i in range(len(string)):
        if what == string[i]: return i+1
def get_all_sv():
    outp = (system('export')).split('\n')
    for i in range(len(outp)):
        outp[i] = outp[i][7:]
        outp[i] = outp[i][whereinstr("=", outp[i]):]
        outp[i] = outp[i].strip('"')
        outp[i] = outp[i].strip('\'')
    return outp
def jp2a(image):
    return system(jp2a(image))
def btn_notif(summary, body, button): return system(f'notify-send --action="{button}" --wait "{summary}" "{body}"') == "0"
def flop(var): return not var
def tee(file, data): open(file, "w").write(data)
def get_battery_status():
    return [system('cat /sys/class/power_supply/BAT0/capacity'), system(f'cat /sys/class/power_supply/BAT0/status')]
def curl(url): return system(f'curl -q {url}')

#good to know
#self.treeWidget.itemClicked.connect(self.selection)
#def selection(self, selection): self.index = self.treeWidget.indexOfTopLevelItem(selection)
def perc(val1, val2):
    return (val1 / val2) * 100

from PyQt6.QtWidgets import QGraphicsDropShadowEffect
from PyQt6.QtGui import QColor
def mintglow(mtip=1):
    # Create the shadow/glow effect
    glow = QGraphicsDropShadowEffect()
    glow.setBlurRadius(35*mtip)  # Increase for a softer "glow"
    glow.setOffset(0, 0)  # 0,0 offset makes it a glow around the widget
    glow.setColor(QColor(255, 255, 255, 255))  # Set color (RGBA)
    return glow