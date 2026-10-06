#include <stdio.h>
#include <math.h>

// Khai báo nguyên mẫu hàm (Function Prototypes)
int findMax(int a, int b, int c);
int checkYear(int year);
void swap(int *a, int *b);
void checkTriangle(float a, float b, float c);

// --- Bài 1: Hàm tìm giá trị lớn nhất trong 3 số ---
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

// --- Bài 2: Hàm kiểm tra năm nhuận ---
int checkYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

// --- Bài 3: Hàm hoán vị 2 số sử dụng con trỏ ---
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// --- Bài 4: Hàm kiểm tra và phân loại tam giác ---
void checkTriangle(float a, float b, float c) {
    // Điều kiện tạo thành tam giác
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Day khong phai la 3 canh cua mot tam giac.\n");
        return;
    }

    // Sử dụng hằng số dung sai cho so sánh số thực float
    const float EPSILON = 1e-3f;

    // Kiểm tra điều kiện bằng dung sai fabs
    int isDeu = (fabs(a - b) < EPSILON) && (fabs(b - c) < EPSILON);
    int isCan = (fabs(a - b) < EPSILON) || (fabs(a - c) < EPSILON) || (fabs(b - c) < EPSILON);
    int isVuong = (fabs(a * a + b * b - c * c) < EPSILON) ||
                  (fabs(a * a + c * c - b * b) < EPSILON) ||
                  (fabs(b * b + c * c - a * a) < EPSILON);

    // Thứ tự kiểm tra ưu tiên các trường hợp đặc biệt hơn
    if (isDeu) {
        printf("Day la tam giac deu.\n");
    } else if (isVuong && isCan) {
        printf("Day la tam giac vuong can.\n");
    } else if (isVuong) {
        printf("Day la tam giac vuong.\n");
    } else if (isCan) {
        printf("Day la tam giac can.\n");
    } else {
        printf("Day la tam giac thuong.\n");
    }
}

// --- Các hàm xử lý giao diện từng case trong Menu ---
void chucNang1() {
    int a, b, c;
    printf("\n--- CHUC NANG 1: TIM GIA TRI LON NHAT TRONG 3 SO ---\n");
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    int max = findMax(a, b, c);
    printf("Gia tri lon nhat trong 3 so la: %d\n", max);
}

void chucNang2() {
    int year;
    printf("\n--- CHUC NANG 2: KIEM TRA NAM NHUAN ---\n");
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (checkYear(year)) {
        printf("Nam %d la nam nhuan.\n", year);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", year);
    }
}

void chucNang3() {
    int a, b;
    printf("\n--- CHUC NANG 3: HOAN VI 2 SO (SU DUNG CON TRO) ---\n");
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
}

void chucNang4() {
    float a, b, c;
    printf("\n--- CHUC NANG 4: KIEM TRA & PHAN LOAI TAM GIAC ---\n");
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);

    checkTriangle(a, b, c);
}

int main() {
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 5              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
        printf("| 2. Kiem tra Nam nhuan                             |\n");
        printf("| 3. Hoan vi 2 so (Su dung Con tro)                 |\n");
        printf("| 4. Kiem tra & Phan loai Tam giac                  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
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
                chucNang4();
                break;
            case 5:
                printf("\nDa thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 1 den 5.\n");
                break;
        }
    } while (luaChon != 5);

    return 0;
}