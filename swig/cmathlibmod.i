/* name of module to use*/
%module cmathlibmod
%{
    #include "cmathlibmod.h"
%}
%include "cmathlibmod.h"
/* explicitly listing functions which are being interfaced */
/* extern int add(int x, int y);
extern int sub(int x, int y);
extern int mul(int x, int y);
extern int divide(int x, int y);
extern int mod(int x, int y);
extern int sumofn(int x);
extern int factorial(int x); */