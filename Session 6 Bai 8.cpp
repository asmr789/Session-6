#include<stdio.h>

int main(){
	int a,month,sum=0,all=0; // sum la tong tien lai 
	printf("Nhap so tien ban dau:");
	scanf("%d",&a);
	printf("Nhap so thang gui:");
	scanf("%d",&month);
	if (a > 0){
		for (int i = 1 ; i <= month ;i++){
			sum += (a * 0.01);
		}
		all = sum + a;
	}
	printf("Tong tien lai va goc %d thang la: %d",month,all);
	return 0;
}