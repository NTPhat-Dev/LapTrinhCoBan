#include <stdio.h>
 
float chiSoThangTruoc, chiSoThangNay;
float soKWh, tienDien;

main () {
 	printf("Nhap chi so dien ke thang truoc: ");
    scanf("%f", &chiSoThangTruoc);

    printf("Nhap chi so dien ke thang nay: ");
    scanf("%f", &chiSoThangNay);

    soKWh = chiSoThangNay - chiSoThangTruoc;

    if (soKWh <= 100) {
        tienDien = soKWh * 1.418;
    } else if (soKWh <= 150) {
        tienDien = 100 * 1.418 + (soKWh - 101) * 1.622;
    } else if (soKWh <= 200) {
        tienDien = 100 * 1.418 + 50 * 1.622 + (soKWh - 151) * 2.044;
    } else if (soKWh <= 300) {
        tienDien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + (soKWh - 201) * 2.210;
    } else if (soKWh <= 400) {
        tienDien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + 100 * 2.210 + (soKWh - 301) * 2.361;
    } else {
        tienDien = 100 * 1.418 + 50 * 1.622 + 50 * 2.044 + 100 * 2.210 + 100 * 2.361 + (soKWh - 401) * 2.420;
    }

    printf("So kWh tieu thu: %.2f\n", soKWh);
    printf("Tien dien: %.3f VND\n", tienDien);
	
}