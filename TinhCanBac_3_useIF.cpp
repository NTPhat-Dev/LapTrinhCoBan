#include <stdio.h>
#include <math.h>

double cbb(double x) {
    double result;
    
    if (x == 0) {
        result = 0;
    }
    else if (x > 0) {
        result = exp(log(x) / 3);
    }
    else {
        result = -exp(log(-x) / 3);
    }
    
    return result;
}

int main() {
    double x;
    printf("Nhap so thuc x: ");
    scanf("%lf", &x);
    
    double result = calculateCubeRoot(x);
    printf("Can bac 3 cua %lf la: %lf\n", x, result);
    
    return 0;
}