#include<stdio.h>
int i,n,d,x[30],s,c;
 main(void)
{
	printf(" nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
	c=0;
	for(i=0;i<n;i++)
    {if(x[i]!=x[n-1-i]) c=1;}
	if(c==0) printf("\nday la day doi xung");
	else printf("\nday khong phai la day doi xung");
	d=x[1]-x[0];
	s=0;
	for(i=2;i<n;i++)
	{if(x[i]-x[i-1]!=d) s=1;}
	if(s==0) printf("\nday la day csc");
	else printf("\nday khong phai la csc");
	

}
