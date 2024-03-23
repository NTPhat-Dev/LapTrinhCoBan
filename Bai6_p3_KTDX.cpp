#include <stdio.h>

int n;

int KTDX(int n)
{
	int SDN = 0;
	int SG = n;

	while (n != 0)
	{
		int PCl = n % 10;
		SDN = SDN * 10 + PCl;
		n /= 10;
	}
	if (SG == SDN)
		return 1;

	return 0;
}

main()
{
	do
	{
		printf("n =");
		scanf("%d", &n);
		if (KTDX(n))
			printf("%d la so doi xung", n);
		else
			printf("%d la so khong doi xung", n);
	} while (n <= 0);
}