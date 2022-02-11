#include<stdio.h>
int a,b,i,j;
int main ()
{
	printf("nhap 2 so nguyen\n");
	scanf("%d%d",&a,&b);
	for(i=a;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("ucln la:%d\n",i);
			break;
		}
	}
	for(j=a;j<=a*b;j++)
	{
		if(j%a==0&&j%b==0) 
		{  printf("bcnn la: %d\n",j);
		   break;
	    }
	}

	
	return 0;
	
}
