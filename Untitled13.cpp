#include <stdio.h>
#include <math.h>

int main ()
{
	float a1, a2, a3, a4, b, c;
	b=5;
	c=8;
	a1=b++ + c++;
	a2=b++ + ++c;
	a3=++b + c++;
	a4=++b + ++c;
	printf("\nGia tri cua a la : %f %f %f %f",a1 ,a2 ,a3 ,a4);
}
