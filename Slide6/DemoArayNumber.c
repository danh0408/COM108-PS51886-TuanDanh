#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

void khoiTao(int Arr[], int size) {
    srand(time(NULL));
    for(int i = 0; i<size; i++) {
        Arr[i] = rand()%10 +1;
    }
}

void xuatMang(int Arr[], int size) {
    printf("\nxuat mang:\n");
    for(int i = 0; i<size; i++) {
        printf("%4d",Arr[i]);
    }
}

void sapXepMang(int Arr[], int size) {
    for(int i = 0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(Arr[i] > Arr[j]) {
                int tam = Arr[j];
                Arr[i] = Arr[j];
                Arr[j] = tam;
            }
        }
    }
}

bool timKiembool(int Arr[], int size, int value) {
    for(int i=0; i<size; i++) {
        if(Arr[i] == value) {
            return true;
        }
    }
    return false;
}
int timKiemInt(int Arr[], int size, int value) {
    for(int i = 0; i<size; i++) {
        if (Arr[i] == value){
            return i;
        }
    }
    return -1;
}
int main() {
    int MangSo[10];
    int size = 10;
    khoiTao(MangSo,size);
    xuatMang(MangSo, size);
    int index = timKiemInt(MangSo, size, 10);
    if(index != -1) {
        printf("\ntim thay 10 tai %d: \n", index);
    } else {
        printf("\nkhong tim thay\n");
    }
    sapXepMang(MangSo, size);
    xuatMang(MangSo, size);
}