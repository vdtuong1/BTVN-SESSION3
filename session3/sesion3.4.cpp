#include <stdio.h>

int main() {
    float toan, van, anh; 
    float tong, trungBinh; 

    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    printf("Nhap diem van: ");
    scanf("%f", &van);

    printf("Nhap diem anh: ");
    scanf("%f", &anh);


    tong = toan + van + anh;
    trungBinh = tong / 3;

    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}

