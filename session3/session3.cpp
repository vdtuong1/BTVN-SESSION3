#include <stdio.h>

int main() {
    char ten[50];
    
    printf("Nhap ten cua ban: ");
    
    fgets(ten, sizeof(ten), stdin);

    printf("Xin chao %s", ten);

    return 0;
}

