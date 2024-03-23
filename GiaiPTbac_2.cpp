#include <stdio.h>
#include <math.h>

float a, b, c, delta;

main () {
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem");
                else
                    printf("Phuong trinh vo nghiem");
            }
        else
            printf("Phuong trinh co nghiem duy nhat x = %f", -c/b);
    }
    else
    {
        delta=b*b-4*a*c;
        if (delta<0)
            printf("Phuong trinh vo nghiem");
        else if (delta==0)
            printf("Phuong trinh co nghiem kep la %f", -b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la x1 = %f, x2 = %f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));    
    }    
  
}
