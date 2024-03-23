#include <stdio.h>
#include <math.h>

double a, b, c, heron, p, alpha, beta, gama;

int main() {
    printf("Nhap vao do dai ba canh a, b, c cua tam giac:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    p = (a + b + c) / 2;
    heron = sqrt(p * (p - a) * (p - b) * (p - c));
    gama = acos((a * a + b * b - c * c) / (2 * a * b));
    alpha = acos((b * b + c * c - a * a) / (2 * b * c));
    beta = acos((a * a + c * c - b * b) / (2 * a * c));

    alpha = alpha * 180 / M_PI;
    beta = beta * 180 / M_PI;
    gama = gama * 180 / M_PI;

    printf("Dien tich tam giac S = %.2lf\n", heron);
    printf("Cac goc lan luot: gama = %.2lf | alpha = %.2lf | beta = %.2lf\n", gama, alpha, beta);

}