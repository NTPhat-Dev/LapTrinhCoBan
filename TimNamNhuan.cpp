#include <stdio.h>

int nam;

int main () {
	printf("Nam nay la nam:  ");
	scanf("%d", &nam);
	if (nam % 4 == 0)
		printf("%d la nam nhuan", nam);
	else
		printf("%d khong phai la nam nhuan", nam);
}