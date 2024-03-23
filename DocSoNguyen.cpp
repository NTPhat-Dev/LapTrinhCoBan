#include <stdio.h>

int n;

int main () {
	printf("nhap 1 so bat ki:  ");
	scanf("%d", &n);
	if (n>=0 && n<=9) {
		printf("%d la so nguyen", n);
	}
	else {
		printf("khong doc duoc");
	}
}