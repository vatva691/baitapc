#include <stdio.h>
#include <math.h>

#define M1 1484
#define M2 1533
#define M3 1786
#define M4 2242

int main ()
{
	float a, tiendien;
	printf("\nHay nhap so dien tieu thu (kWh) : ");
	scanf("%f", &a);
	if (a<=50) tiendien=M1*a;
	else if (a<=100) tiendien=M1*50+M2*(a-50);
	else if (a<=200) tiendien=M1*50+M2*100+M3*(a-100);
	else tiendien=M1*50+M2*100+M3*200+M4*(a-200);
	printf("\nTien dien la (VND) : %.2f", tiendien);
}
