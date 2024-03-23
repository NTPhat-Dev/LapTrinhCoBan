#include <stdio.h>

float LNC, NCQD, SNC, TL;
int songay = 1;

main () {
	printf("Tinh tien luong ne cac tinh yeu\n");
	
	printf("Luong ngay cong: ");
	scanf("%f", &LNC);
	printf("So ngay cong quy dinh: ");
	scanf("%f", &NCQD);
	printf("So ngay cong: ");
	scanf("%f", &SNC);
	
	if (SNC>NCQD) {
		songay = 2;
	}
	TL = SNC*LNC*songay;
	
	printf("Tien luong cua be iu la:  %f", TL); 
}