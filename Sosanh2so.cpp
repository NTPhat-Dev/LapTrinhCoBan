#include <stdio.h>

float a, b;

int main () {
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	if (a > b)
		printf("So lon nhat = %f", a);
	else; 
		printf("So lon nhat la = %f", b);	
} 