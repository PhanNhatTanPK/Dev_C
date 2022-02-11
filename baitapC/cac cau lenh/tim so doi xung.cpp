#include<stdio.h>
int n,s,a,q;
int main()
{
	printf("nhap N: ");
	scanf("%d",&n);
	a=0;
	q=n;
	while(q>0)
	{
	    s=q%10;
	    a=a*10+s;
	    q/=10;
	 
	}

	if(a==n) printf("day la so doi xung:%d",n);
	else printf("ko phai la so doi xung");
	return 0;
}
