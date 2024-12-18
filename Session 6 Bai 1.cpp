#include<stdio.h>

int main(){
	int a,sum=0;
	for (int i = 1;i <= 5;i++){
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	if(a % 2 != 0){
	sum += a;
}
}
	printf("Tong 5 so le la %d",sum);
	return 0;
}