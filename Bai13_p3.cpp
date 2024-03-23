#include <stdio.h>

main()
{
    int n;
    int tong = 0;
    
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

	int tachso = n;
	while (tachso > 0)
	{
		int num = tachso % 10;
		tong += num;
		tachso /= 10;
	}
    printf("Tong cac chu so co trong n la: %d", tong);
}