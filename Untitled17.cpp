#include<stdio.h>
int main ()
{
float r1, r2, r3, equ_r;
 printf("Nhap gia tri ba dien tro: ");
 scanf("%f%f%f", &r1, &r2, &r3);
 equ_r = 1/(1/r1 + 1/r2 + 1/r3);
 printf("Dien tro tuong duong mac song song= %.2f", equ_r);
 }
