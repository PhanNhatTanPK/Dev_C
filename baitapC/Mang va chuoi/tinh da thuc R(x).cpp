#include<stdio.h>
int n,i,p[100],q[100],r[100];
main(void)
{
	printf("nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("p[%d]=",i);
		scanf("%d",&p[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("q[%d]=",i);
		scanf("%d",&q[i]);
	}
	printf("tong cua da thuc la:");
	for(i=0;i<n;i++)
	{
		r[i]=p[i]+q[i];
		printf("%4d",r[i]);
	}
}
