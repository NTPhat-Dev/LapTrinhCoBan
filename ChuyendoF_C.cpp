#include <stdio.h>

float C = 0;
float F;

int main () {
	printf("F = ");
	scanf("%f", &F);
	C = 5/float(9) * (F-32);	
	printf("Thoi tiet bay gio la %.1f oC", C);
}