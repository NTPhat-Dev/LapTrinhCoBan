#include <stdio.h>
#include <math.h>
int n;
float tong, tong2 = 0;
int S3, S6 = 0;
double S4 = 0;
float S5 = 1.0;

main()
{
	do
	{
		printf("n = ");
		scanf("%d", &n);
	} while (n <= 0);

	for (int i = 1; i <= n; i++)
	{
		tong += i;
		tong2 = tong2 + pow(i, 2);
		double tong4 = pow(-1, i - 1) / pow(2 * i, 2);
		S4 += tong4;
		float tong5 = (2.0 * i - 1) / (2.0 * i);
		S5 *= tong5;
		S6 += pow(-1, i - 1) * i * (i + 1) * (i + 2);
	}
	for (int i = 0; i <= n; i++)
	{
		int tong3 = pow(2 * i + 1, 2);
		S3 += tong3;
	}
	float S1 = tong / n;
	float S2 = sqrt(tong2);

	printf("S1 = %.2f | S2 = %.3f | S3 = %d | S4 = %lf | S5 = %f | S6 = %d", S1, S2, S3, S4, S5, S6);
}