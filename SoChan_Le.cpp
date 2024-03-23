#include <stdio.h>

int a;

int main () {
	printf("a = ");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d La so chan", a);
	else 
		printf("%d La so le", a);
}