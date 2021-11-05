#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, d, x1, x2;
	printf("\nNhap 3 so a, b, c trong pt bac 2: ax^2+bx+c=0 :");
	scanf("%f%f%f", &a, &b, &c);
	d=pow(b,2)-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	d<0?printf("\nPhuong trinh vo nghiem"):printf("\nPhuong trinh co nghiem :  %f %f", x1, x2);
}
