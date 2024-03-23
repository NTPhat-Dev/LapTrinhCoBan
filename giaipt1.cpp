#include <stdio.h>
#include <conio.h>

main () {
	int a, b;
	printf("Nhap a, b:  ");
	scanf("%d%d", &a, &b);
	if (a == 0)
		if (b == 0)
			printf("Phuong trinh VSN");
		else 
			printf("Phuong trinh VN");
		else
			printf("x = %.2f", -float(b)/a);
}