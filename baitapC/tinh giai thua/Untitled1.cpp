#include<stdio.h>
#define Max 50000

int TGT(int n)
{
	FILE *fo;
	fo=fopen("TGT.out.txt","w");
	int A[Max],i,j,m=1;
	long long r,q;
	A[0]=1;
	r=0;
	for(int i=2; i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			q=r;
			r=(A[j]*i+r)/10;
			A[j]=(A[j]*i+q)%10;
		}
		while(r>0)
		{
			A[m]=r%10;
			m++;
			r/=10;
		}
	}
      for(i=m-1;i>=0;i--)
          fprintf(fo,"%d",A[i]);
         
}

main(void)
{
	int n;
	FILE *fi;
	fi= fopen("TGT.inp.txt","r");
	fscanf(fi,"%d",&n);
    TGT(n);
    
}
