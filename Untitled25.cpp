#include <stdio.h>
#include <math.h>

int main ()
{
	int a, a1, a2, a3, tong;
	printf("\nNhap so tu nhien co 3 chu so : ");
	scanf("%d", &a);
	if (a>999 && a<99) printf("\nSo khong hop le");
	else 
	{
		a1=a/100;
		a2=a%100/10;
		a3=a%10;
		tong=a1+a2+a3;
		printf("\nTong 3 chu so la : %d", tong);
	}
}
