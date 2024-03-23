#include <stdio.h>

main()
{
    double soTienGui;
    int soThang;

    printf("So tien gui: ");
    scanf("%lf", &soTienGui);

    printf("So thang gui: ");
    scanf("%d", &soThang);

    double laiSuat = 0.0;

    if (soThang >= 1 && soThang <= 5)
    {
        laiSuat = 6.0;
    }
    else if (soThang >= 6 && soThang <= 12)
    {
        laiSuat = 6.6;
    }
    else if (soThang >= 13 && soThang <= 14)
    {
        laiSuat = 7.5;
    }
    else if (soThang >= 15 && soThang <= 17)
    {
        laiSuat = 7.6;
    }
    else if (soThang >= 18 && soThang <= 23)
    {
        laiSuat = 7.7;
    }
    else if (soThang >= 24 && soThang <= 35)
    {
        laiSuat = 8.0;
    }
    else if (soThang > 36)
    {
        laiSuat = 8.5;
    }

    double soDu = soTienGui;

    for (int i = 0; i < soThang; i++)
    {
        double lai = soDu * (laiSuat / 100);
        soDu += lai;
    }

    printf("So tien nhan duoc sau %d thang la: %.2lf", soThang, soDu);
}