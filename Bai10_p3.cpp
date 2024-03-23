#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d khong la so nguyen to\n", n);
    }
    else
    {
        int i;
        int x = 1;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                x = 0;
                break;
            }
        }
        if (x == 1)
        {
            printf("%d la so nguyen to", n);
        }
        else
        {
            printf("%d khong la so nguyen to", n);
        }
    }
    return 0;
}