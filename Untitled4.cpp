#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c, d;
	float tbc, tbn;
	printf("\nNhap 4 so a b c d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);	
	tbc=(a+b+c+d)/4;
	tbn=pow(a*b*c*d,1.0000/4);
	printf("\n Trung binh cong la : %.4f",tbc);
	printf("\n Trung binh nhan la : %.4f",tbn);
}
