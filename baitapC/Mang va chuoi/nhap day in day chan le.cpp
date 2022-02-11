#include<stdio.h>
int n,i,x[30];
main(void)
{
	printf("nhap n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
		if(x[i]%2==0) printf("%2d",x[i]);
	printf("\n");
	for(i=0;i<n;i++)
	   if(x[i]%2!=0) printf("%2d",x[i]);
	
}

