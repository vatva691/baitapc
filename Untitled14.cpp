#include <stdio.h>
#include <math.h>

int main ()
{
	int a1, a2, b;
	printf("\nNhap b:");
	scanf("%d", &b);
	a1=(b==2)?1:2;
	a2=(b=2)?1:2;
	printf("\nKet qua cua a la: %d %d",a1 ,a2);
}
