#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, tbc, tbn;
	printf("\nNhap a va b va c: ");
	scanf("%f%f%f", &a, &b, &c);
	tbc=(a+b+c)/3;
	tbn=pow(a*b*c,1.00/3);
	printf("Trung binh cong la : %.2f",tbc);
	printf("\nTrung binh nhan la : %.2f",tbn);

}
