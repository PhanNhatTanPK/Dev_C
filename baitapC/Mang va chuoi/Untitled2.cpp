#include<stdio.h>
int c,i,n,x[30],r,q;
main(void)
{
	printf("nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}c=0;
	r=0;
	for(i=0;i<n;i++)
	{q=x[i];
		while(q>0)
		{q=x[i];
		r=r*10+q%10;
		q/=10;}
	}	if(r!=x[i]) c=1;
	printf("cac so doi xung la");
	for(i=0;i<n;i++)
	{
	  if(c==0) printf("%4d",x[i]);}
}
