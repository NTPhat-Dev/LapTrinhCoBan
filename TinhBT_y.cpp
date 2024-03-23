#include <stdio.h>
#include <math.h>

float x, y;

main () {
	printf("x = ");
	scanf("%f", &x);
	
	if (x > 1) {
		y = 2 + (x*x);
	}
	else if (-1 <= x <= 1) {
		y = fabs(sin(x) / (x+2));
	}
	else {
		y = pow(log(fabs(2*x)), 2);
	}
	
	printf("Bieu thuc y = %.2f", y);
}