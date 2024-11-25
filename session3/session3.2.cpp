#include <stdio.h>

int main() {
    float celsius, fahrenheit;

   
    printf("Nhap nhiet do? (°C): ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiet do? %.2f°C tuong ðuong voi %.2f°F.\n", celsius, fahrenheit);

    return 0;
}

