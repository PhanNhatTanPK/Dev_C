#include<stdio.h>
main(void)
{
	FILE *fi,*fo;
	int i,n,A[100],max;
	fi=fopen("file.inp.txt","r");
	fo=fopen("file.out.txt","w");
	fscanf(fi,"%d",&n);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
	        fscanf(fi,"%d",&A[i]);
    }
    max=A[0];
	for(i=0;i<n;i++)
	{
		
		if(A[i]>max)
		    max=A[i];
	}
	
	fprintf(fo,"%d",max);
	printf("\n%d",max);
	fclose(fi);
	fclose(fo);
}
