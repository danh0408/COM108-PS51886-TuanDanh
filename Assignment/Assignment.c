#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

// ==========================================
// MAN HINH MENU CHINH[cite: 6]
// ==========================================
int main() {
    int luaChon;
    do {
        printf("\n=======================================================\n");
        printf("                MENU MON NHAP MON LAP TRINH             \n");
        printf("=======================================================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va Boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT (2/15)\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("-------------------------------------------------------\n");
        printf("Xin moi chon chuc nang (0-10): ");
        
        if (scanf("%d", &luaChon) != 1) {
            printf("Lua chon khong hop le! Vui long nhap so.\n");
            clearBuffer();
            continue;
        }

        switch (luaChon) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 9: chucNang9(); break;
            case 10: chucNang10(); break;
            case 0:
                printf("\nCam on ban da su dung chuong trinh! Tam biet.\n");
                break;
            default:
                printf("\nChuc nang khong hop le! Vui long chon tu 0 den 10.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}