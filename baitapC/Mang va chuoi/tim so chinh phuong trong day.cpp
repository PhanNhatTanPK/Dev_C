#include<stdio.h>
#include<math.h>
int n,i,x[30];
float a;
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
	{
		a=(int)sqrt(x[i]);
		if(a*a==x[i]) printf("%4d",x[i]);
	}

}
