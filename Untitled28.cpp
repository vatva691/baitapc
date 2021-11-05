#include <stdio.h>
int main ()
{
	int n, n1, n2, n3;
	printf("Nhap so co 3 chu so : ");
	scanf("%d", &n);
	n1= n%10;
	n= n/10;
	n2= n%10;
	n3= n/10;
	if (n1*n1*n1 + n2*n2*n2 + n3*n3*n3 == n)
		printf("La so Armstrong");
	else
		printf("Khong la so Armstrong");
}
