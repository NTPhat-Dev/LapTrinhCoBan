#include <stdio.h>

float a;

int main () {
	printf("a = ");
	scanf("%f", &a);
	if (a > 0)
		printf("%f la so duong", a);
	else
		printf("%f la so am", a); 
		
}