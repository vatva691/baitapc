#include <stdio.h>
#include <math.h>

int main ()
{
	int a, a1, a2, a3, tong;
	printf("\nNhap mot so nguyen co 3 chu so:");
	scanf("%d", &a);
	a2=((a%100/10));
	a3=(a%10);
	a1=a/100;
	tong=a1+a2+a3;
	printf("\nTong 3 chu so la : %d", tong);
	
}
