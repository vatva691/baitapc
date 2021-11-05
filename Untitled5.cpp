#include <stdio.h>
#include <math.h>

int main ()
{
	int n1, n2;
	float hang1, hang2, gia1, gia2;
	printf("\nHay nhap so luong cua mat hang 1 va 2: ");
	scanf("%d%d", &n1, &n2);
	hang1=123000;
	hang2=324000;
	gia1=hang1*n1;
	gia2=hang2*n2;
	printf("Tong gia cua mat hang la : %f", gia1+gia2);
}
