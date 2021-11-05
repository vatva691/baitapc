#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c, d, min;
	printf("\nHay nhap 4 so a b c d : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);	
	min=a;
	b<min?min=b:min=a;
	c<min?min=c:min=a;
	d<min?min=d:min=a;
	printf("\nGia tri nho nhat cua 4 so la : %d",min);
}
