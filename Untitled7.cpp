#include <stdio.h>
#include <math.h>

int main ()
{
	float r1, r2, rnt, rss;
	printf("\nNhap gia tri dien tro 1 :");
	scanf("%f", &r1);
	printf("\nNhap gia tri dien tro 2 :");
	scanf("%f", &r2);
	rnt=r1+r2;
	rss=(r1*r2)/(r1+r2);
	printf("\nGia tri dien tro noi tiep la : %f",rnt);
	printf("\nGia tri dien tro song song la : %f",rss);
}
