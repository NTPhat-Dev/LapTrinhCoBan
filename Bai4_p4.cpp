#include <stdio.h>
int traveMin(int a, int b, int c, int d);

main()
{
	int a, b, c, d;
	printf("Nhap 4 so nguyen a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int timgiatrinhonhat = traveMin(a, b, c, d);
	printf("Min = %d", timgiatrinhonhat);
}

int traveMin(int a, int b, int c, int d)
{
	int min = a;

	if (min > b)
	{
		min = b;
	}

	if (min > c)
	{
		min = c;
	}

	if (min > d)
	{
		min = d;
	}

	return min;
}