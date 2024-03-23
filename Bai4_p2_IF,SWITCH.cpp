#include <stdio.h>

float a, b, x;

main () {
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	if (a==0) {
		if (b==0) {
			printf("Phuong trinh vo so nghiem\n");
		} else {
			printf("Phuong trinh vo nghiem\n");
		} 
	} else {
			x = -b/a;
			printf("Nghiem x = %.2f", x);
		}
}