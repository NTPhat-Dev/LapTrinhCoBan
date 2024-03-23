#include <stdio.h>
#include <math.h>
void ptBac2(float a, float b, float c);

main()
{
	float a, b, c;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);

	ptBac2(a, b, c);
}

void ptBac2(float a, float b, float c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("Phuong trinh vo so nghiem");
			}
			else
			{
				printf("Phuong trinh vo nghiem");
			}
		}
		else
		{
			printf("Phuong trinh co 1 nghiem duy nhat x = %.2f", -c / b);
		}
	}
	else
	{
		float delta = pow(b, 2) - 4 * a * c;
		if (delta < 0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else if (delta == 0)
		{
			printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", -b / 2 * a);
		}
		else
		{
			float x1 = (-b + sqrt(delta)) / 2 * a;
			float x2 = (-b - sqrt(delta)) / 2 * a;
			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f | x2 = %.2f", x1, x2);
		}
	}
}