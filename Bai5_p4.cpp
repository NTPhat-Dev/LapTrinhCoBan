#include <stdio.h>
void fibonacci(int n);

main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);

	fibonacci(n);
}

void fibonacci(int n)
{
	int f0 = 0, f1 = 1, fibo;

	printf("Day fibonacci gom %d phan tu:\n%d", n);
	for (int i = 2; i <= n; i++)
	{
		fibo = f0 + f1;
		printf(" %d", fibo);
		f1 = f0;
		f0 = fibo;
	}
}