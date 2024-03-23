#include <stdio.h>

int KTCP(int n)
{
	int i;
	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return 1;
		}
	}
	return 0;
}

main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);

	if (KTCP(n))
	{
		printf("%d la so chinh phuong", n);
	}
	else
	{
		printf("%d khong la so chinh phuong", n);
	}
}