#include <stdio.h>

main()
{
    double soTienGui;
    double laiSuatThang;
    double soTienNhanDuoc;

    printf("So tien gui: ");
    scanf("%lf", &soTienGui);

    printf("Lai suat hang thang: ");
    scanf("%lf", &laiSuatThang);

    printf("So tien nhan duoc: ");
    scanf("%lf", &soTienNhanDuoc);

    double soDu = soTienGui;
    int soThang = 0;

    while (soDu < soTienNhanDuoc)
    {
        double lai = soDu * (laiSuatThang / 100);
        soDu += lai;
        soThang++;
    }

    printf("So thang can gui de dat duoc la: %d\n", soThang);
}