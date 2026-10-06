#include <stdio.h>
#include <math.h>

// Hàm thực hiện Chức năng 1: Tính trung bình cộng các số chia hết cho 2
void chucNang1() {
    int min, max;
    printf("\n--- CHUC NANG 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 2 ---\n");
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    int tong = 0;
    int bienDem = 0;

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }

    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        float trungBinh = (float)tong / bienDem;
        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

// Hàm thực hiện Chức năng 2: Kiểm tra số nguyên tố
void chucNang2() {
    int x;
    printf("\n--- CHUC NANG 2: KIEM TRA SO NGUYEN TO ---\n");
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d khong phai la so nguyen to.\n", x);
        return;
    }

    int isNguyenTo = 1; // Giả sử x là số nguyên tố
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            isNguyenTo = 0;
            break;
        }
    }

    if (isNguyenTo) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// Hàm thực hiện Chức năng 3: Kiểm tra số chính phương
void chucNang3() {
    int x;
    printf("\n--- CHUC NANG 3: KIEM TRA SO CHINH PHUONG ---\n");
    printf("Nhap x: ");
    scanf("%d", &x);

    // Xử lý trường hợp đặc biệt cho số không âm (0 là 0 * 0)
    if (x < 0) {
        printf("%d khong phai la so chinh phuong.\n", x);
        return;
    }

    int isChinhPhuong = 0;
    for (int i = 0; i * i <= x; i++) {
        if (i * i == x) {
            isChinhPhuong = 1;
            break;
        }
    }

    if (isChinhPhuong) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }
}

int main() {
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 4              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                chucNang1();
                break;
            case 2:
                chucNang2();
                break;
            case 3:
                chucNang3();
                break;
            case 4:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 1 den 4.\n");
                break;
        }
    } while (luaChon != 4);

    return 0;
}