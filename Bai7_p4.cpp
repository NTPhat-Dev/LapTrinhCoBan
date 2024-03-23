#include <stdio.h>
#include <math.h>
#define ll long long

ll gcd(ll a, ll b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("Boi so chung nho nhat cua %d va %d la: %d", a, b, lcm(a, b));
}