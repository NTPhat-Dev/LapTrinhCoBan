#include <stdio.h>

main()
{
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("Cac so tu %d den %d chia het cho 3 la:", a, b);

	for (int i = a; i <= b; i++)
		if (i % 3 == 0)
			printf("\n%d", i);
}