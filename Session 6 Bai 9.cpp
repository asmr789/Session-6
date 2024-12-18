#include<stdio.h>

int main(){
	int a,b,c,d,sum; // a la 3 so,b la so dau,c la so thu hai,d la so thu ba
		for (a = 100 ;a <= 999;a++){
			b = a / 100;
			c = (a /10)%10;
			d = a %10;
		sum = (b*b*b)+(c*c*c)+(d*d*d);
		if ( a == sum){
			printf("%d\n",sum);
		}	
	}

}
