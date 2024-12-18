#include<stdio.h>

int main(){
	int a;
	printf("Nhap so nguyen n: ");
	scanf("%d",&a);
	for (int i = 1;i < a ;i++){
		if ( a % i == 0){
			printf("Uoc cua %d la: %d\n",a,i);
			
		}
	}
	return 0;
}