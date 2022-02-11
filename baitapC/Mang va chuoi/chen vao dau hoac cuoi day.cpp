#include<stdio.h>
int n,i,x,a[30];
main(void)
{
	printf("nhap n, x:\n");
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	n++;
	a[0]=x;
	printf(" day sau khi chen vao dau:  ");
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
    for(i=0;i<n;i++)
    {a[i]=a[i+1];
     a[n]=x;
    } 
    
   
	printf("\nday sau khi chen vao cuoi:  ");
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
