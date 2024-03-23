#include <stdio.h>

int n;

main () {
	printf("n = ");
	scanf("%d", &n);
	
	if (n>0)
		printf("n la so duong");
	else if (n<0)
		printf("n la so am");
	else 
		printf("n la bang 0");
}