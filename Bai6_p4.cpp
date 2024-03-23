#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool soNguyento(int n);
int KTDX(int n);
int sumNguyento(int n);
int ktChinhphuong(int n);
int sumChinhphuong(int n);

int main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);

	if (soNguyento(n)) {
		printf("%d la so nguyen to\n", n);
	} else {
		printf("%d khong la so nguyen to\n", n);
	}
	
	if (KTDX(n)) {
		printf("%d la so doi xung\n", n);
	} else {
		printf("%d khong la so doi xung\n", n);
	}
	
	int tongnguyento = sumNguyento(n);
	printf("Tong cac so cua %d la: %d\n", n, tongnguyento);
	
	int tongChinhphuong = sumChinhphuong(n);
	printf("Tong cac so chinh phuong = %d", tongChinhphuong); 
}

bool soNguyento(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int KTDX(int n)
{
	int sodaonguoc = 0;
	int sobandau = n;

	while (sobandau != 0)
	{
		int a = n % 10;
		sodaonguoc = sodaonguoc * 10 + a;
		sobandau /= 10;
	}
	if (sobandau == sodaonguoc) 
		return 1;
	return 0;
}

int sumNguyento(int n)
{
	int tong = 0;

	while (n != 0)
	{
		int so = n % 10;

		if (soNguyento(so))
		{
			tong += so;
		}
		n /= 10;
	}
	return tong;
}

int ktChinhphuong(int n)
{
	int socp = sqrt(n);
	return (socp * socp == n);
}

int sumChinhphuong(int n)
{
	int tong = 0;

	while (n != 0)
	{
		int so = n % 10;
		if (ktChinhphuong(so))
		{
			tong += so;
		}
		n /= 10;
	}
	return tong;
}