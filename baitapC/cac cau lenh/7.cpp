#include<stdio.h>
#include<math.h>
float x,s;
int main(){
	printf("nhap x:");
	scanf("%f",&x);
	if (x==2) printf("s= vo cung");
	if(x<2) printf("s= rong");
	if(x>2) 
	{s=exp(1.0/5*log(x*x-4));
	        printf("gia tri cua x la: %1f",s);}
	return 1;
	}
