#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, cv,s;
	printf("\nNhap vao 3 canh cua tam giac : ");
	scanf("%f%f%f", &a, &b, &c);
	cv=a+b+c;
	s=a*b*c;
	if(a+b>c && a+c>b && b+c>a)	
	{
	printf("\nDay la 3 canh do dai tam giac."); 
	printf("\nChu vi 3 canh la: %f",cv);
	printf("\nDien tich 3 canh la: %f",s);
	}
	else printf("\nDay khong phai do dai 3 canh tam giac: ");
}
