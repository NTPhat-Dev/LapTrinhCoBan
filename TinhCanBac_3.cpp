#include <stdio.h>
#include <math.h>

float x;

main () {
	printf("x = ");
	scanf("%f", &x);
	
	float cbb = cbrt(x);
	printf("Can bac ba cua x = %.2f", cbb);
}