#include<stdio.h>

int n,i,j,s;
int main(){
	do
	{
	printf("nhap n \n");
	scanf("%d", &n);
    }    
	while(n<=0);
    for(i=2;i<=n;i++)
    {
    	s=0;
    	for(j=1;j<=i/2;j++)
    	{
    		if(i%j ==0) 
    		s+=j;
		}
	  if(s==i) printf("\nso hoan hao la:%d ",i);
	}
return 1;

}
