#include<stdio.h>
int n,i,x[10],d,c;
main(void)
{
	printf ("nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
	d=0; c=0;
	for(i=0;i<n-1;i++)
	{
		if(x[i]<x[i+1]) c=1;
		d++;
	}
	if(d==n-1&&c==0) printf("\nday la day giam");
	else if (d==n-1&&c==1) printf("\nday la day tang");
	else printf("day la day ko tang ko giam");
}
