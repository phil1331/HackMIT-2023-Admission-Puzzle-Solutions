from z3 import *
import string

validChars = string.ascii_letters + string.digits + "_"

# each character is only valid if it is an alphanumerical or a '_' character
def isValid(pwItem):
    return Or([pwItem == ord(ch) for ch in validChars])

pw_length = 0x40
pwComponents = ""
s = Solver()

# Creating array pw string for the BitVecs
for i in range(pw_length):
    pwComponents += f"pw[{i}] "

# we convert each character into a suitable format for z3 which is a BitVec that just represents a byte (pw is renamed to pwBVs)
pwBVs = BitVecs(pwComponents.strip(), 8)

for i in range(5, pw_length - 1):
    s.add(isValid(pwBVs[i]))

# "simple" constraints (actually optional)
s.add(pwBVs[0] == ord('h'))
s.add(pwBVs[1] == ord('a'))
s.add(pwBVs[2] == ord('c'))
s.add(pwBVs[3] == ord('k'))
s.add(pwBVs[4] == ord('{'))
s.add(pwBVs[pw_length - 1] == ord('}'))

# parsed constraints (mostly auto generated with the help of python, capstone & java)
s.add(pwBVs[44] & pwBVs[59] == 48)
s.add(pwBVs[3] ^ pwBVs[0x17] == 0x34)
s.add(pwBVs[0x3d] + pwBVs[0x19] == 0x69)
s.add(pwBVs[0x2b] & pwBVs[0x1f] == 0x11)
s.add(pwBVs[0x29] + pwBVs[0x21] == 0xe9)
s.add(pwBVs[0x31] ^ pwBVs[0xa] == 0x1c)
s.add(pwBVs[0x20] ^ pwBVs[0x22] == 0x5b)
s.add(pwBVs[0x23] | pwBVs[0xf] == 0x7f)
s.add(pwBVs[0x18] ^ pwBVs[0x3a] == 0x52)
s.add(pwBVs[1] + pwBVs[0x24] == 0xc7)
s.add(pwBVs[9] | pwBVs[0x14] == 0x7f)
s.add(pwBVs[0x26] + pwBVs[0x16] == 0xd8)
s.add(pwBVs[0x3c] - pwBVs[0x25] == 9)
s.add(pwBVs[0x37] | pwBVs[8] == 0x76)
s.add(pwBVs[0xd] & pwBVs[0x2d] == 0x62)
s.add(pwBVs[0x11] & pwBVs[0x3e] == 0x32)
s.add(pwBVs[7] + pwBVs[6] == 0xdb)
s.add(pwBVs[0xe] ^ pwBVs[0x32] == 0x49)
s.add(pwBVs[0x13] ^ pwBVs[0x2e] == 0x17)
s.add(pwBVs[0x3f] & pwBVs[0x34] == 0x31)
s.add(pwBVs[0] ^ pwBVs[0x10] == 0x1c)
s.add(pwBVs[0xb] + pwBVs[0x39] == 0x98)
s.add(pwBVs[0x28] | pwBVs[0x30] == 0x76)
s.add(pwBVs[0x15] + pwBVs[0x2a] == 0xdd)
s.add(pwBVs[4] | pwBVs[0x1e] == 0x7b)
s.add(pwBVs[0x12] & pwBVs[2] == 0x61)
s.add(pwBVs[0x38] ^ pwBVs[0x1a] == 0x56)
s.add(pwBVs[0x1c] & pwBVs[0x1d] == 0x70)
s.add(pwBVs[0x1b] | pwBVs[0xc] == 0x7f)
s.add(pwBVs[5] & pwBVs[0x35] == 0x34)
s.add(pwBVs[0x33] - pwBVs[0x36] == 7)
s.add(pwBVs[0x27] | pwBVs[0x2f] == 0x5f)
s.add(pwBVs[0x14] & pwBVs[0x39] == 0x11)
s.add(pwBVs[0xe] | pwBVs[0x33] == 0x7f)
s.add(pwBVs[0x34] + pwBVs[0x18] == 0x94)
s.add(pwBVs[0xa] - pwBVs[0x2b] == 0xf)
s.add(pwBVs[0x1c] - pwBVs[0x10] == 0)
s.add(pwBVs[0x28] - pwBVs[0x38] == 0x2e)
s.add(pwBVs[0x2d] ^ pwBVs[0x1b] == 0x5b)
s.add(pwBVs[0x29] & pwBVs[0x3c] == 0x31)
s.add(pwBVs[0x32] + pwBVs[0x30] == 0xa0)
s.add(pwBVs[0xb] | pwBVs[0] == 0x6f)
s.add(pwBVs[0x17] & pwBVs[1] == 0x41)
s.add(pwBVs[0x37] + pwBVs[0x20] == 0x9e)
s.add(pwBVs[0x27] - pwBVs[0x23] == 0)
s.add(pwBVs[0x1f] | pwBVs[0x31] == 0x73)
s.add(pwBVs[0x2c] & pwBVs[0x16] == 0x24)
s.add(pwBVs[0x1a] ^ pwBVs[3] == 5)
s.add(pwBVs[0x26] + pwBVs[0xd] == 0xe5)
s.add(pwBVs[0xc] | pwBVs[0x2e] == 0x7f)
s.add(pwBVs[9] + pwBVs[0x12] == 0x9e)
s.add(pwBVs[0x1d] - pwBVs[0x3d] == 0x39)
s.add(pwBVs[0x35] ^ pwBVs[0x3b] == 0x45)
s.add(pwBVs[0x2a] ^ pwBVs[0x1e] == 0xf)
s.add(pwBVs[0x3a] & pwBVs[0x21] == 0x30)
s.add(pwBVs[0x36] ^ pwBVs[0xf] == 0x6a)
s.add(pwBVs[0x25] | pwBVs[0x19] == 0x30)
s.add(pwBVs[4] | pwBVs[0x13] == 0x7b)
s.add(pwBVs[8] - pwBVs[2] == 0x13)
s.add(pwBVs[0x22] ^ pwBVs[0x3f] == 0x48)
s.add(pwBVs[0x24] & pwBVs[0x11] == 0x22)
s.add(pwBVs[0x15] - pwBVs[7] == 3)
s.add(pwBVs[0x2f] | pwBVs[0x3e] == 0x7f)
s.add(pwBVs[5] ^ pwBVs[6] == 0x5a)
s.add(pwBVs[0x15] ^ pwBVs[0x11] == 0x5c)
s.add(pwBVs[0x25] & pwBVs[0x16] == 0x20)
s.add(pwBVs[0x10] ^ pwBVs[0x12] == 0x19)
s.add(pwBVs[0x29] - pwBVs[0x23] == 0x16)
s.add(pwBVs[0x18] & pwBVs[0x21] == 0x60)
s.add(pwBVs[0x2a] + pwBVs[0x2e] == 0xd2)
s.add(pwBVs[0x22] | pwBVs[0x36] == 0x7f)
s.add(pwBVs[0x1d] & pwBVs[0xb] == 0x62)
s.add(pwBVs[0x2f] + pwBVs[0x1a] == 0xcd)
s.add(pwBVs[5] | pwBVs[0x26] == 0x77)
s.add(pwBVs[0x34] ^ pwBVs[0x3b] == 0)
s.add(pwBVs[9] + pwBVs[0x1b] == 0x66)
s.add(pwBVs[0x13] - pwBVs[0x3e] == 0x3d)
s.add(pwBVs[6] & pwBVs[0x27] == 0x4f)
s.add(pwBVs[0x30] & pwBVs[0x3c] == 0x30)
s.add(pwBVs[0x17] ^ pwBVs[0x1c] == 0x2b)
s.add(pwBVs[0xe] & pwBVs[7] == 0x68)
s.add(pwBVs[0x39] + pwBVs[0x14] == 0x90)
s.add(pwBVs[0x2b] + pwBVs[3] == 0xca)
s.add(pwBVs[0] & pwBVs[1] == 0x60)
s.add(pwBVs[0x35] + pwBVs[0xa] == 0xe2)
s.add(pwBVs[0x38] ^ pwBVs[0x2d] == 0x56)
s.add(pwBVs[0x28] + pwBVs[0x1e] == 0xc7)
s.add(pwBVs[4] ^ pwBVs[0x31] == 9)
s.add(pwBVs[8] | pwBVs[0x19] == 0x76)
s.add(pwBVs[0xd] | pwBVs[0x2c] == 0x77)
s.add(pwBVs[0xf] | pwBVs[0x33] == 0x77)
s.add(pwBVs[0x32] | pwBVs[0x3f] == 0x7d)
s.add(pwBVs[0x1f] ^ pwBVs[0x3a] == 0)
s.add(pwBVs[0x3d] + pwBVs[2] == 0x9c)
s.add(pwBVs[0x37] + pwBVs[0x20] == 0x9e)
s.add(pwBVs[0x24] - pwBVs[0xc] == 7)
s.add(pwBVs[0x1a] & pwBVs[0x34] == 0x20)
s.add(pwBVs[0x26] ^ pwBVs[0x37] == 0x42)
s.add(pwBVs[0x3e] ^ pwBVs[6] == 0x59)
s.add(pwBVs[0x28] - pwBVs[0x2f] == 7)
s.add(pwBVs[7] ^ pwBVs[0x36] == 0x33)
s.add(pwBVs[0x23] & pwBVs[8] == 0x56)
s.add(pwBVs[0x1b] ^ pwBVs[0x33] == 0x53)
s.add(pwBVs[0x15] & pwBVs[0x2e] == 0x64)
s.add(pwBVs[0x3c] + pwBVs[0] == 0xa1)
s.add(pwBVs[0x11] ^ pwBVs[0xa] == 0x5d)
s.add(pwBVs[0x29] | pwBVs[0x3f] == 0x7d)
s.add(pwBVs[1] | pwBVs[0x3d] == 0x79)
s.add(pwBVs[0x17] + pwBVs[0x25] == 0x8f)
s.add(pwBVs[0x2a] - pwBVs[5] == 0x39)
s.add(pwBVs[0x22] + pwBVs[0x38] == 0x6d)
s.add(pwBVs[0x13] | pwBVs[0x30] == 0x73)
s.add(pwBVs[0x1c] | pwBVs[0x2c] == 0x74)
s.add(pwBVs[2] - pwBVs[0x27] == 4)
s.add(pwBVs[0x19] ^ pwBVs[0x21] == 0x44)
s.add(pwBVs[0x12] | pwBVs[0x1d] == 0x7f)
s.add(pwBVs[0x16] ^ pwBVs[0x18] == 5)
s.add(pwBVs[9] | pwBVs[0x2b] == 0x7f)
s.add(pwBVs[0x14] + pwBVs[0xe] == 0xd8)
s.add(pwBVs[0x2d] | pwBVs[0x10] == 0x7e)
s.add(pwBVs[0x3b] + pwBVs[0xc] == 0x90)
s.add(pwBVs[0x1f] + pwBVs[0x32] == 0x61)
s.add(pwBVs[0x3a] + pwBVs[0x20] == 0x9f)
s.add(pwBVs[3] ^ pwBVs[4] == 0x10)
s.add(pwBVs[0x35] ^ pwBVs[0x31] == 6)
s.add(pwBVs[0x1e] + pwBVs[0x39] == 0x92)
s.add(pwBVs[0x24] - pwBVs[0xf] == 0x31)
s.add(pwBVs[0xb] ^ pwBVs[0xd] == 0x14)

# Solved it first without the while loop and the notConditions
# Wanted to check whether there might be some more "easter egg solutions"
while s.check() == sat:
    m = s.model()
    foundPassword = ""
    
    # print valid characters that match our constraints and add them to notConditions, so in the next loop *at least* one of the characters that fulfills all conditions must have changed. If the next loop doesn't find a solution anymore with the notConditions in mind, there is only exactly one solution.
    notConditions = []
    for i in range(pw_length):
        notConditions.append(m[pwBVs[i]] != pwBVs[i])
        foundPassword += chr(m[pwBVs[i]].as_long())

    print(foundPassword)

    s.add(Or(notConditions))