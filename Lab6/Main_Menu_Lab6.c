#include <stdio.h>

#define MAX 100

// Khai báo nguyên mẫu hàm (Function Prototypes)
void timMaxMin(int a[], int n);
void sapXepGiamDan(int a[], int n);
void maTranBinhPhuong(int row, int col);
void xuatSoLeMaTran(int row, int col);

// --- Bài 1: Tìm giá trị lớn nhất và nhỏ nhất trong mảng ---
void timMaxMin(int a[], int n) {
    if (n <= 0) return;

    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);
}

// --- Bài 2: Sắp xếp mảng theo thứ tự giảm dần ---
void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In mảng theo chuẩn định dạng: a[0] = [giá trị], a[1] = [giá trị], ...
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d", i, a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

// --- Bài 3: Ma trận bình phương (Mảng 2 chiều) ---
void maTranBinhPhuong(int row, int col) {
    int a[MAX][MAX];

    printf("Nhap cac phan tu cho ma tran (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran binh phuong:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

// --- Bài 4: Lọc và xuất vị trí các số lẻ trong ma trận ---
void xuatSoLeMaTran(int row, int col) {
    int a[MAX][MAX];

    printf("Nhap cac phan tu cho ma tran (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int coSoLe = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            // Dùng % 2 != 0 để đúng cho cả số lẻ âm
            if (a[i][j] % 2 != 0) {
                printf("Phan tu le tai a[%d][%d] = %d\n", i, j, a[i][j]);
                coSoLe = 1;
            }
        }
    }

    if (!coSoLe) {
        printf("Ma tran khong co so le nào!\n");
    }
}

// --- Các hàm xử lý giao diện từng case trong Menu ---
void chucNang1() {
    int n, a[MAX];
    printf("\n--- CHUC NANG 1: TIM MAX VA MIN TRONG MANG ---\n");
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    timMaxMin(a, n);
}

void chucNang2() {
    int n, a[MAX];
    printf("\n--- CHUC NANG 2: SAP XEP MANG GIAM DAN ---\n");
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    sapXepGiamDan(a, n);
}

void chucNang3() {
    int row, col;
    printf("\n--- CHUC NANG 3: MA TRAN BINH PHUONG ---\n");
    printf("Nhap so hang (row): ");
    scanf("%d", &row);
    printf("Nhap so cot (col): ");
    scanf("%d", &col);

    maTranBinhPhuong(row, col);
}

void chucNang4() {
    int row, col;
    printf("\n--- CHUC NANG 4: LOC VA XUAT VI TRI SO LE TRONG MA TRAN ---\n");
    printf("Nhap so hang (row): ");
    scanf("%d", &row);
    printf("Nhap so cot (col): ");
    scanf("%d", &col);

    xuatSoLeMaTran(row, col);
}

int main() {
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 6              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tim gia tri Lon nhat va Nho nhat trong Mang    |\n");
        printf("| 2. Sap xep Mang theo thu tu Giam dan              |\n");
        printf("| 3. Ma tran binh phuong (Mang 2 chieu)             |\n");
        printf("| 4. Loc va xuat vi tri cac So le trong Ma tran     |\n");
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