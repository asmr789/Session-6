#include <stdio.h>

int main() {
    int day, month;
    char * zodiac = "hehehaha";
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thang sinh: ");
    scanf("%d", &month);
        if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
            zodiac = "Bach Duong";
        } else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
            zodiac = "Kim Nguu";
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
            zodiac = "Song Tu";
        } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
            zodiac = "Cu Giai";
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
            zodiac = "Su Tu";
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
            zodiac = "Xu Nu";
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 23)) {
            zodiac = "Thien Binh";
        } else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
            zodiac = "Bo Cap";
        } else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
            zodiac = "Nhan Ma";
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
            zodiac = "Ma Ket";
        } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
            zodiac = "Bao Binh";
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
            zodiac = "Song Ngu";
        } else {
            printf("Ngay hoac thang khong hop le! Vui long nhap lai.\n");
            printf("Nhap ngay sinh: ");
            scanf("%d", &day);
            printf("Nhap thang sinh: ");
            scanf("%d", &month);
        }
    printf("Cung hoang dao cua ban la: %s\n", zodiac);
    
    return 0;
}