#include<stdio.h>

int main(){
	int a,b=0,c=0; // b chan c le 
	for (int i = 1;i <= 5;i++){
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	if(a % 2 != 0){
	c++;
}
    else{
    	b++;
	}
}
	printf("Tong cong co %d so le va %d so chan",c,b);
	return 0;
}