#include <stdio.h>
int main() {
    #define PI 3.14159
    float chieu_rong, chieu_dai;
    printf("Nhap chieu rong: ");
    scanf("%f", &chieu_rong);
    printf("Nhap chieu dai");
    scanf("%f", &chieu_dai);
    printf("Dien tich hinh chu nhat: %f\n", chieu_rong * chieu_dai);
    printf("chu vi hinh chu nhat: %f\n", 2 * (chieu_rong + chieu_dai));
    float ban_kinh;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh);
    printf("Dien tich hinh tron: %.2f\n", PI * ban_kinh * ban_kinh);
    printf("chu vi hinh tron: %2f\n", 2 * PI * ban_kinh);
    return 0;
}