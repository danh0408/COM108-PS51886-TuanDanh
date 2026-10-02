#include <stdio.h>
int main() {
    // Khai báo các môn học
    float Toan;
    float Ly;
    float Hoa;
    // Khai báo điểm
    float DiemTrungBinh;
    // Nhập Điểm Toán
    printf("Nhap diem Toan: ");
    scanf("%f", &Toan);
    // Nhập Điểm Lý
    printf("Nhap diem Ly: ");
    scanf("%f", &Ly);
    // Nhập Điểm Hóa
    printf("Nhap diem Hoa: ");
    scanf("%f", &Hoa);
    // Tính điểm trung bình
    DiemTrungBinh = (Toan * 3 + Ly * 2 + Hoa * 1) / 6;
    printf("Diem Trung Binh: %.2f\n", DiemTrungBinh);
    return 0;
}