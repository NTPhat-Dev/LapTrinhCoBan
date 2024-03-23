
#include <stdio.h>
#include <math.h>

void GIAIPT (double a, double b, double c, double d) {
	double delta, K, nghiem1, nghiem2, nghiem3;
	
	//Tính delta
	delta = (b*b) - (4*a*c);
	//Tính K
	if (delta != 0) {
	K= ((9*a*b*c) - (2*b*b*b) - (27*a*a*d)) / (2*sqrt(fabs(delta)*fabs(delta)*fabs(delta)));
	}
	if (delta > 0 && fabs(K) <= 1) {
		//Phuong trinh co 3 nghiem
		nghiem1 = ((2*sqrt(delta)*cos(acos(K)/3)-b) / 3*a);
		nghiem2 = ((2*sqrt(delta)*cos(acos(K)/3 - 2*M_PI/3)-b) / 3*a);
		nghiem3 = ((2*sqrt(delta)*cos(acos(K)/3 + 2*M_PI/3)-b) / 3*a);
		
		printf("x1 = %lf\n", nghiem1);
		printf("x2 = %lf\n", nghiem2);
		printf("x3 = %lf\n", nghiem3);
	}
	if (delta > 0 && fabs(K) > 1) {
		//Phuong trinh co 1 nghiem duy nhat
		nghiem1 = ((sqrt(delta)*fabs(K)) / 3*a*K) * ((cbrt(fabs(K)+sqrt(K*K-1))) + (cbrt(fabs(K)-sqrt(K*K-1)))) - b/3*a;
		printf("Nghiem duy nhat la x = %lf\n", nghiem1);
	} 
	if (delta == 0 && b*b*b - 27*a*a*d == 0) {
		//Phuong trinh co 1 nghiem boi
		nghiem1 = -b / 3*a;
		printf("Nghiem boi cua PT la x = %lf\n", nghiem1);
	} 
	if (delta == 0 && b*b*b - 27*a*a*d != 0) {
		//Phuong trinh co 1 nghiem duy nhat
		nghiem1 = ((-b + cbrt(b*b*b-27*a*a*d)) / 3*a);
		printf("Phuong trinh co nghiem duy nhat x = %lf\n", nghiem1);
	}
	if (delta<0) {
		//Phuong trinh co 1 nghiem duy nhat
		nghiem1 = (sqrt(delta)/3*a) * (cbrt(K+sqrt(K*K+1)) + cbrt(K-sqrt(K*K+1))) - b/3*a;
		printf("Phuong trinh co nghiem duy nhat x = %lf", nghiem1);
	}
}
	
int main () {
	double a, b, c, d;
	
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	printf("d = ");
	scanf("%lf", &d);
	GIAIPT (a, b, c, d);
	return 0;
}