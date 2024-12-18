#include <stdio.h>

int main() {
    int a = 1607; 
    int b;         
    do {
        printf("Nhap mat khau: ");
        scanf("%d",&b);
        if (b != a) {
            printf("Nhap sai roi thu lai \n");
        }
    } while (b != a); 
    printf("Chuc mung nhap dung roi %d\n", b);
    return 0;
}