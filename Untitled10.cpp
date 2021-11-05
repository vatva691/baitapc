#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, max;
	printf("\nNhap 3 so a b c:");
	scanf("%f%f%f",&a ,&b ,&c);
	max=a;
	b>max?max=b:max=a;
	c>max?max=c:max=a;
	printf("\nGia tri max la : %f",max);
	
}
