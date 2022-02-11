#include<stdio.h>
int n,x,i,k,a[30];
main(void){
	printf("nhap n,k,x:\n");
	scanf("%d%d%d",&n,&k,&x);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=n;i>k;i--)
	{
		a[i]=a[i-1];
	}
	n++;
	a[k]=x;
	printf("day sau khi chen la:");
	for(i=0;i<n;i++)
        printf("%d",a[i]);
}
