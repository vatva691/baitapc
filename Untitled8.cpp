#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, cv, s;
	printf("\nHay nhap vao do dai 3 canh cua tam giac : ");
	scanf("%f%f%f", &a, &b, &c);
	cv=(a+b+c);
	s=a*b*c;
	printf("\nChu vi cua tam giac la: %f",cv);
	printf("\nDien tich cua tam giac la : %f",s);
}
