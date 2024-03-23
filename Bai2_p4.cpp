#include <stdio.h>
void ptBac1(float a, float b);

main()
{
	float a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	ptBac1(a, b);
}

void ptBac1(float a, float b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			printf("Phuong trinh vo so nghiem\n");
		}
		else
		{
			printf("Phuong trinh vo nghiem\n");
		}
	}
	else
	{
		float x = -b / a;
		printf("Phuong trinh co 1 nghiem duy nhat x = %.2f", x);
	}
}
