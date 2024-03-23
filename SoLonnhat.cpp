#include <stdio.h>
	int a, b, max;

int main () {
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	max = a;
	if (a<b) {
		max = b;
	}
	printf("So lon nhat la: %d", max);
}