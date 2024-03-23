#include <stdio.h>
#include <math.h>

void gcd(int n);
int sumgcd(int n);
int countgcd(int n);
int sumgcdChan(int n);

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	gcd(n);

	int tonguocso = sumgcd(n);
	printf("Cac uoc so cua %d co tong = %d", n, tonguocso);

	int demuocso = countgcd(n);
	printf("\nSo luong uoc so cua %d la %d", n, demuocso);

	int tonguocchan = sumgcdChan(n);
	printf("\nTong cac uoc so chan = %d", tonguocchan);
	return 0;
}

void gcd(int n)
{
	printf("%d co cac uoc so la: ", n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

int sumgcd(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	return tong;
}

int countgcd(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	return count;
}

int sumgcdChan(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0 && i % 2 == 0)
		{
			tong += i;
		}
	}
	return tong;
}