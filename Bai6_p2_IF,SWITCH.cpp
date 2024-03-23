#include <stdio.h>

//Mã màu ANSI
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"

char color;

main  () {
	printf("Nhap vao ki tu (R/G/B): ");
	scanf("%c", &color);
	
	if (color == 'R' || color == 'r') {
		printf(ANSI_COLOR_RED "RED\n" ANSI_COLOR_RESET);
	}
	else if (color == 'G' || color == 'g') {
		printf(ANSI_COLOR_GREEN "GREEN\n" ANSI_COLOR_RESET);
	}
	else if (color == 'B' || color == 'b') {
		printf(ANSI_COLOR_BLUE "BLUE\n" ANSI_COLOR_RESET);
	}
	else {
		printf("BLACK");
	} 
		
}