#include <stdio.h>

int gt(int num)
{
    int a = 1;
    for (int i = 1; i <= num; i++)
    {
        a *= i;
    }
    return a;
}

int tohop(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    else
    {
        int tuso = gt(n);
        int mauso = gt(k) * gt(n - k);
        return tuso / mauso;
    }
}

int main()
{
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);

    if (n >= 0 && k >= 0 && k <= n)
    {
        int kq = tohop(n, k);
        printf("To hop chap %d cua %d = %d", k, n, kq);
    }
    else
    {
        printf("ERROR!!!");
    }

    return 0;
}