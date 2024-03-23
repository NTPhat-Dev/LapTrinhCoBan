#include <stdio.h>

int sohh(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	return tong == n;
}

main()
{
	printf("Cac so hoan hao nho hon 1000 la:\n");

	for (int i = 2; i < 1000; i++)
	{
		if (sohh(i))
		{
			printf("%d\n", i);
		}
	}
}