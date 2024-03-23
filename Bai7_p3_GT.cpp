#include <stdio.h>

main()
{
	int n;
	int gt = 1;

	do
	{
		printf("n = ");
		scanf("%d", &n);
	} while (n <= 0);

	for (int i = 1; i <= n; i++)
		gt *= i;
	printf("%d! = %d", n, gt);
}