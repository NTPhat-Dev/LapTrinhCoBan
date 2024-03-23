#include <stdio.h>

//Khai bao cac bien
int soluong;
float dongia, tien, VAT, tongtien;
	
main () {
	
	//nhap so luong & don gia
	printf("Nhap so luong: ");
	scanf("%d", &soluong);
	printf("Nhap don gia: ");
	scanf("%f", &dongia);
	
	//tinh tien
	tien = soluong * dongia;
	printf("Tien = %.3f\n", tien);
	VAT = tien * 0.1;
	printf("Thue VAT = %.3f\n", VAT);
	tongtien = VAT + tien;
	printf("Tong tien phai tra = %.3f", tongtien);
}