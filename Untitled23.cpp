#include <stdio.h>
#include <math.h>

int main ()
{
	int a;
	printf("\nNhap muc trinh do :");
	scanf("%d", &a);
	switch (a) {
		case 1:
			printf("So cap\n");
			break;
		case 2:
			printf("Trung cap\n");
			break;
		case 3:
			printf("Dai hoc\n");
			break;
		case 4:
			printf("Cao hoc\n");
			break;
		case 5:
			printf("Pho Tien si\n");
			break;
		case 6:
			printf("Tien si \n");
			break;
		default:
			printf("Ma sai\n");
			
	}
	
}
