#include <stdio.h>
#include <math.h>
#define DONGIA 5973
int main ()
{
	char hoten[255]; 
	float sometkhoi, dongia, tien, thue, tong;
	printf("\nHay nhap ten khach hang : ");
	scanf("%s", &hoten);
	printf("\nHay nhap so met khoi: ");
	scanf("%f", &sometkhoi);
	tien=DONGIA*sometkhoi;
	thue=0.1*tien;
	tong=thue+tien;
	printf("\nHo ten khach hang : %s", hoten);
	printf("\nSo m khoi nuoc tieu thu : %f",sometkhoi);
	printf("\nThanh tien: %f",tien);
	printf("\nThue VAT (10%) : %f",thue);
	printf("\nTong so tien phai tra : %f",tong);
	
}
