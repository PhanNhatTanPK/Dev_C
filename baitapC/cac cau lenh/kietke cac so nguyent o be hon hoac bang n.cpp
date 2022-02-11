#include<stdio.h>
#include<stdlib.h>
int i,n,a,s;
int main(){
	FILE *fi;
	FILE *fo;
	fi= fopen("sopt.txt","r");
	fo=fopen("ghisopt.txt","w");
	char *st[20];
	fscanf(fi,"%d",&st);
	n=atoi(*st);
	if(n<2) printf("khong phia la so nguyen to");
	printf("cac so nguyen to la :");
	s=0;
	for(i=2;i<=n;i++)
	{
		for(a=1;a<=i;a++)
		{
		  if(i%a==0)
		  s++;
		} 
		  if(s==2) fprintf(fo,"%d  ",i);
		s=0;
	}
	
	return 1;
}
