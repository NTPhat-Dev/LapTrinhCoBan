#include <stdio.h>

float x1, x2, x3, x4;
float max, min;

main () {
	printf("x1, x2, x3, x4: ");
	scanf("%f%f%f%f", &x1, &x2, &x3, &x4);
	
	max=x1;
	min=x1;
	
	if (x2>max) {
		max=x2;
	}
	if (min>x2) {
		min=x2;
	}
	if (x3>max) {
		max=x3;
	}
	if (min>x3) {
		min=x3;
	}
	if (x4>max) {
		max=x4;
	}
	if (min>x4) {
		min=x4;
	}
	
	printf("max la %.2f\n", max);
	printf("min la %.2 f", min);
}                                         