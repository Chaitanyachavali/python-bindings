# Building 
* swig -python cmathlibmod.i
* gcc -c -fpic cmathlibmod_wrap.c cmathlibmod.c -I/usr/include/python2.7
* gcc -shared cmathlibmod.o cmathlibmod_wrap.o -o _cmathlibmod.so