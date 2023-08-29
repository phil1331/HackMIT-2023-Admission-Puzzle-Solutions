from capstone import *
import struct

l = [0x0e5d562f, 0x0f1d572f, 0x0d2816bf, 0x0e6d97bf, 0x0ebfd61f, 0x0e8f97cf, 0x0bb8193f, 0x0e6811df, 0x18d3969b, 0x2e5f16bf, 0x0e2db62f, 0x0e2d943f, 0x0e8fd71f, 0x0ebdb18f, 0xf08f894f, 0x0e2e17bf, 0x0e6e11cb, 0x0e6811ac]
val = 0x0e6811ac

bytes = b""

for i in l:
    bytes += struct.pack("I", i ^ val)

arch = Cs(CS_ARCH_RISCV, CS_MODE_RISCV32)

for i in arch.disasm(bytes, 0x80000ea8):
    print(("%#8x" % i.address) + ': ' + i.mnemonic + ' ' + i.op_str)