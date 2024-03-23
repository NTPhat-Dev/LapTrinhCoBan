#include <stdio.h>
#include <ctype.h>

char kitu;

main () {
	printf("Nhap vao ki tu bat ki:  ");
	scanf("%c", &kitu);
	
	if (islower(kitu)) {
		kitu = toupper(kitu);
	} else if (isupper(kitu)) {
		kitu = tolower(kitu);
	}
	printf("Ki tu sau khi doi: %c", kitu);
}