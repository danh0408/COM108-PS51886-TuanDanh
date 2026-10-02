#include <stdio.h>
int main() {
    char mssv[10] = "PS51886";
    char fullname[20] = "Nguyen Van Tuan Danh";

    float toan = 6;
    float ly = 5;
    float hoa = 6;

    float dtb = ((toan * 2) + ly + hoa) / (float)4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", fullname);
    printf("Diem trung binh: %.2f\n", dtb);

    return 0;
}