#include <stdio.h>

int tongsotien;
int count50k=0, count100k=0, count200k=0, count500k=0;

main () {
	printf("Nhap vao tong so tien: ");
	scanf("%d", &tongsotien);
	

	if (tongsotien>=500000) {
		count500k = tongsotien/500000;
		tongsotien %= 500000;
	}

	if (tongsotien>=200000) {
		count200k = tongsotien/200000;
		tongsotien %= 200000;
	}
	
	if (tongsotien>=100000) {
		count100k = tongsotien/100000;
		tongsotien %= 100000;
	}
	
	if (tongsotien>=50000) {
		count50k = tongsotien/50000;
		tongsotien %= 50000;
	}
	
	int tongtotien = count50k + count100k + count200k + count500k;
	
	printf("So to tien it nhat la: %d\n", tongtotien);
	printf("So to 50k la: %d\n", count50k);
	printf("So to 100k la: %d\n", count100k);
	printf("So to 200k la: %d\n", count200k);
	printf("So to 500k la: %d", count500k);
					
}