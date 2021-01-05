//Code written on December 5, 2020
//Revised  December 8, 2020
// by G V V Sharma
//This program implements a boolean function in C

#include <stdio.h>

//The  main function
int main(void)
{

//2 bits = 1 baud
//4 bits = 1 nibble
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  Z=0x00,Y=0x01,X=0x01,W=0x01;//inputs in hex	
unsigned char one = 0x01;//used for displaying the output in bit
unsigned char A,B,C,D;//outputs

A = ((~W)&(~X)&(~Y)&(~Z))|((~W)&(X)&(~Y)&(~Z))|((~W)&(~X)&Y&(~Z))|((~W)&X&Y&(~Z))|((~W)&(~X)&(~Y)&(Z));
//Boolean function for A
B = ((W)&(~X)&(~Y)&(~Z))|((~W)&(X)&(~Y)&(~Z))|((W)&(~X)&(Y)&(~Z))|((~W)&(X)&(Y)&(~Z));
C = ((W)&(X)&(~Y)&(~Z))|((~W)&(~X)&(Y)&(~Z))|((W)&(~X)&(Y)&(~Z))|((~W)&(X)&(Y)&(~Z));
D = (W&X&Y&(~Z))|((~W)&(~X)&(~Y)&Z);//Boolean function for D

printf("%x\n",one&A);//Output D
printf("%x\n",one&B);//Output D
printf("%x\n",one&C);//Output D
printf("%x\n",one&D);//Output D
return 0;
}