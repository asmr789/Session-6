#include<stdio.h>

int main(){
	int a,b;
	printf("Vui long nhap thang (1 - 12 ): ");
	scanf("%d",&a);
	printf("Vui long nhap nam: ");
	scanf("%d",&b);
	if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12 ){
		printf("Thang %d nam %d co 31 ngay",a,b);
	}
	else if (a == 2){
		if (b % 400 == 0 || b % 4 ==0 && b != 0){
		printf("Thang %d nam %d co hoac 29 ngay ",a,b);
	}
	else {
		printf("Thang %d nam %d co hoac 28 ngay ",a,b);
	}
	}
	else if ( a == 6 || a == 9 || a == 11){
		printf("Thang %d nam %d co 30 ngay ",a,b);
	}
	else{ 
	printf("So thang va nam khong hop le");
    }
    return 0;
}