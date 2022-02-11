#include<stdio.h>
int i,a,b;
int main (){
	for(i=10;i<=99;i++){
		a=i/10;
		b=i%10;
	if(a*b == 2*(a+b))
	     printf("%d%d ", a,b);
	}
	return 1;
}
