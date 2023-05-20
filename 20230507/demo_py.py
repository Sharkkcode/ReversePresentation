from pwn import *

io = process("./demo")

io.sendafter(b": ", b"1\n")

io.sendafter(b": ", b"2\n")
io.sendafter(b": ", b"3\n")
io.sendafter(b": ", b"4\n")

io.interactive()

