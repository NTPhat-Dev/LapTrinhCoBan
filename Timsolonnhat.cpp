#include <stdio.h>

float a, b, c;

int main () {
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	if (a>b && a>c)
		printf("So lon nhat = %f", a);
	else if (b>a && b>c)
		printf("So lon nhat = %f", b);
	else if (c>a && c>b)
		printf("So lon nhat = %f", c);
}