#include <stdio.h>

int n;

main () {
	printf("n = ");
	scanf("%d", &n);
	
	int f0=0, f1=1, fibonacci;
	for(int i = 2; i<=n; i++) {
		fibonacci=f0+f1;
		f1=f0;
		f0=fibonacci;
	}
	printf("Fibonacci thu n = %d", fibonacci);
}