#include <stdio.h>
#include <math.h>

int main ()
{
	int n, i; 
	float s=1;
	printf("n = ");
	scanf("%d", &n);
	i=1;
	while(i<=n)
	{
		s=s*i;
		i=i+1;
	}
	
	printf("%d! = %f", n, s );
}
