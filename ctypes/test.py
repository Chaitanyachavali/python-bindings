from ctypes import *
cmod = CDLL('./cmathlibmod.so')
print cmod.add(2,5)
print cmod.sub(2,5)
print cmod.mul(2,5)
print cmod.divide(2,5)
print cmod.mod(2,5)
print cmod.sumofn(7)
print cmod.factorial(7)