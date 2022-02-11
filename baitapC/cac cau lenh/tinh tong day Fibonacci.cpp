#include<stdio.h>
int n,i,S,T3,T1=0,T2;

int main(){
	printf("nhap gia tri n:\n");
	scanf("%d",&n);
	T1=1;
	T2=1;
	printf("%d  %d   ",T1,T2);
	S=2;
	for(i=2;i<n;i++)
	{
		T3=T1+T2;
		printf(" %d  ",T3);
		T1=T2;
		T2=T3;
		S+=T3;
	}
	
	printf("gia tri cua day la: %d",S);
	return 1;
}

