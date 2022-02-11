#include <stdio.h>
int n,i,j,count;
int main(){
	printf("nhap n:\n");
	scanf("%d",&n);
	if(n<2) printf("ko phai la so nguyen to");
	count=0;
	for(i=2;i<=(n-1);i++)
	  { 
	  	if(n%i==0)
		count ++ ;
	  }
		if(count==0) printf(" la so nguyen to");
		else 
			{
		      for(j=2;j<=n;j++)
		      { while(n%j==0)
		         {
		           printf("%d.",j);
		           n/=j;
		         }  
			  }
			}		
	return 1;
}
