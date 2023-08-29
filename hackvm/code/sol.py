import os
import gdb
import string

all_characters = string.ascii_letters + string.digits + '_'

prevCount = 12
s = f"hack{{{'-' * 41}}}"
gdb.execute("b main") # set breakpoint to main, so the program later doesn't immediately execute after being ran but provides us with the possibility to set the debug constant

for i in range(5, len(s) - 1):
    for c in all_characters:
        s = s[:i] + c + s[i + 1:]
        os.system(f"echo '{s}' > tmpPassword.txt") # print current password into tmpPassword.txt
        gdb.execute("run puzzle1 &> tmp.txt < tmpPassword.txt") # use this file as input to our program which we call with gdb
        gdb.execute("set *(char*)0x40b341 = 1") # set debug constant to 1
        gdb.execute("cont") # continue
        content = open("tmp.txt").read() # read gdb output
        countOfHashFunction = content.count("0x80000044") # count hash address calls
        if countOfHashFunction > prevCount: # if the current count of hash address calls is greater than the last one we found our next character and can continue with the next one with a new previous hash function call count
            prevCount = countOfHashFunction
            break

print(f"Password is \"{s}\".")