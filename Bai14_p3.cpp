#include <stdio.h>

main()
{
    int n;
    int sodao = 0;
    printf("n = ");
    scanf("%d", &n);

    while (n > 0)
    {
        int num = n % 10;
        sodao = sodao * 10 + num;
        n /= 10;
    }
    printf("Sau dao nguoc = %d", sodao);
}