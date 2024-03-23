#include <stdio.h>

int N, s1, s2, s3, s4, nut;

main () {
	printf("Nhap bien so cua may do:  ");
	scanf("%d", &N);
	s4 = N % 10; N = N / 10;
	s3 = N % 10; N = N / 10;
	s2 = N % 10; N = N / 10;
	s1 = N % 10; 
	nut = (s1 + s2 + s3 + s4) % 10;
	printf("So nut = %d", nut);
}