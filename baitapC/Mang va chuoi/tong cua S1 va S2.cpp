#include <stdio.h>
#include<math.h>
int n,i,x[100];
float s;
main(void)
{
	printf("nhap n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d", &x[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+x[i];
	}
	printf("gia tri cua S1 la:%0.2f\n",(1.0/n)*s);
	printf("gia tri cua S2 la:%0.2f",sqrt(s*s));
}
