#include<stdio.h>
#include<string.h>
int n,i,q,p,x[30],a[30],b[30],j,tg1,tg,f;
main(void)
{
	printf("nhap n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);
	}
	q=0;
	p=0;
	for(i=0;i<n;i++)
	{
		if(x[i]%2==0){ a[p]=x[i];
		p++;}
		else {b[q]=x[i];
		q++;}
	}
	for(i=0;i<p-1;i++)
	{
		for(j=i+1;j<p;j++)
		{
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		} 
	}printf("day a la:\n");
	 for(i=0;i<p;i++)
	printf("%3d",a[i]);
	for(i=0;i<q-1;i++)
	{
		for(f=i+1;f<q;f++)
		{
			if(b[i]<b[f])
			{
				tg1=b[i];
				b[i]=b[f];
				b[f]=tg1;
			}
		}
	}printf("\nday b la:\n");
	for(i=0;i<q;i++)
	printf("%3d",b[i]);
	n=p+q;
	for(i=0;i<n;i++)
	{if(i<p) x[i]=a[i];
	else x[i]=b[i-p];}
	printf("\nday sau khi noi la:");
	for(i=0;i<n;i++)
	printf("%3d",x[i]);
	
}
