#include<stdio.h>
int m,n,i,j,a[30][30],b[30][30],c[30][30],d[30][30];
main(void)
{
	printf("nhap m,n:");
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran a la:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("ma tran b la:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d",b[i][j]);
		
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+2*b[i][j];
		}
	}
	printf("ma tran c la:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		    d[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("ma tran d la:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%3d",d[i][j]);
		}
		printf("\n");
	}
}
