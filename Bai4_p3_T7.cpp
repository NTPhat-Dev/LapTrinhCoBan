#include <stdio.h>

int main()
{
    int n;
    int T7 = 1;

    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            T7 *= i;
        }
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            T7 *= i;
        }
    }
    printf("T7 = %d", T7);
}