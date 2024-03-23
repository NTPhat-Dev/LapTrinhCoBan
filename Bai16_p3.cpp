#include <stdio.h>

int main()
{
    int tiengui, sothang;
    double laisuat;

    printf("So tien gui: ");
    scanf("%d", &tiengui);
    printf("So thang gui: ");
    scanf("%d", &sothang);
    printf("Lai suat 1 thang: ");
    scanf("%lf", &laisuat);

    double sodu = tiengui;

    for (int i = 0; i < sothang; i++)
    {
        double lai = sodu * laisuat;
        sodu += lai;
    }
    printf("So tien nhan duoc sau %d thang la: %.lf", sothang, sodu);
}
