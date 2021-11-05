#include <stdio.h>
#include <math.h>

int main ()
{
	float a1, a2, b1, b2, c1, c2, x, y;
	printf ("\nHay nhap 3 so a1, b1, c1, a2, b2, c2 trong he phuong trinh : ");
	scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);
	if (a1==a2 && b1==b2 && c1==c2 && b2*a1-a2*b1==0 && a1==0) printf("\nPhuong trinh vo nghiem");
	else
	{
		printf("\nPhuong trinh co nghiem");
		y=(c2*a1-a2*c1)/(b2*a1-a2*b1);
		x=(c1-b1*y)/a1;
		printf("\n Phuong trinh co nghiem x, y : %f %f", x, y);	
	}
	
}
