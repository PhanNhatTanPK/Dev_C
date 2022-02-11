#include<stdio.h>
#include<math.h>
float x,s;
int main(){
	printf("nhap x:");
	scanf("%f",&x);
	if (x==0) printf("s= vo cung");
	if(x<0) printf("s= rong");
	if(x>0) 
	{s=exp(1.0/3*log(x));
	        printf("gia tri cua x la: %1f",s);}
	return 1;
	}
	
