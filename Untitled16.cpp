#include<stdio.h>
int main ()
{
float r1, r2, equ_r;
 printf("Nhap gia tri hai dien tro: ");
 scanf("%f%f", &r1, &r2);
 equ_r=1/(1/r1 + 1/r2);
 printf("Dien tro tuong duong mac song song= %.2f", equ_r);
 }
