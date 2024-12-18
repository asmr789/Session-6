#include <stdio.h>
#include <math.h> 

int main() {
    int a, b, c; 
    int delta, x1, x2; 
    printf("Nhap a (a khac 0): ");
    scanf("%d", &a);  
    while (a == 0) { 
        printf("a phai khac 0 Nhap lai a: ");
        scanf("%d", &a);
    }
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    delta = b * b - 4 * a * c;
    printf("Phuong trinh: %dx^2 + %dx + %d = 0\n", a, b, c);
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %d\n", x1);
        printf("x2 = %d\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x = %d\n", x1);
    } else {
        printf("Phuong trinh vo nghiem \n");
    }
    return 0;
}