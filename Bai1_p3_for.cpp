#include <stdio.h>

main()
{
	int a, b, tong;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	tong = 0;

	for (int i = a; i <= b; i++)
		tong += i;

	printf("Tong cac so tu %d den %d = %d", a, b, tong);
}