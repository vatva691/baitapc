#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, x1, x2, d;
	printf("\nNhap 3 so a, b, c trong phuong trinh bac 2 ax^2+bx+c=0 : ");
	scanf("%f%f%f", &a, &b, &c);
	d=pow(b,2)-4*a*c;
	if (d<0) printf("\nPhuong trinh vo nghiem")
	;else {
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("\nPhuong trinh co 2 nghiem: %f %f", x1, x2);
	} 
	
}
