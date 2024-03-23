#include <stdio.h>
#include <math.h>

//Khai bao bien
float R, chuvi, dientich;

main () {
	
	//NHap R
	printf("Nhap R = ");
	scanf("%f", &R);
	
	//Tinh chu vi & dien tich
	chuvi = M_PI * 2 * R;
	dientich = R*2 * M_PI;
	printf("Chu vi cua hinh tron = %.3f\n", chuvi);
	printf("Dien tich cua hinh tron = %.3f", dientich);
}