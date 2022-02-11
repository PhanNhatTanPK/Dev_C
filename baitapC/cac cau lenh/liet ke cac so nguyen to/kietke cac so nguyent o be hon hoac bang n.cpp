#include<stdio.h>
int i,n,a,s;
char st[20];
int kt(int n)
{
	if(n==1||n==2)
	   return 0;
	else
	{
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			   return 0;
		}
	}
	return 1;
}
int main(){
	FILE *fi,*fo;
	fi= fopen("primenumber.inp.txt","r");
	fo=fopen("primenumber.out.txt","w");
	fscanf(fi,"%d",&n);

	for(i=2;i<=n;i++)
	{
		if(kt(i)==1)
		    printf("%d ",i);
		    
		  
	}
	
	fclose(fi);
	fclose(fo);
	return 1;
}
