
#include<stdio.h>
int n,i,x[10];
main(void)
{
	printf("nhap N:");
	scanf("%d",&n);
/*	for(i=0;i<n;i++)
	{
		printf("x[%d]=");
		scanf("%d",&x[i]);
	}*/
	x[0]=1;
	x[1]=1;
	printf("day fibonaci la:%2d%2d",x[0],x[1]);
	for(i=2;i<n;i++)
	{
		x[i]=x[i-1]+x[i-2];
		printf("%2d",x[i]);
	}
}
