#include <stdio.h>

int a, b, doicho;

int main () {
	printf("Truoc khi doi cho\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	doicho = a;
	a = b;
	b = doicho;
	printf("Sau khi doi cho\n");
	printf("a = %d | b = %d", a, b);
}