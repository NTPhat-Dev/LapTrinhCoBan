#include <stdio.h>

main()
{
	int n;
	int tongchan = 0;
	int tongle = 0;

	do
	{
		printf("n = ");
		scanf("%d", &n);
	} while (n <= 1);

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			tongchan += i;
		}
		else
		{
			tongle += i;
		}
	}

	printf("Tong chan = %d", tongchan);
	printf("\nTong le = %d", tongle);
}