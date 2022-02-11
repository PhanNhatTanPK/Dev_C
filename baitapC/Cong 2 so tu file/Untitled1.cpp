#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fi;
    FILE *fo;
	
	fi= fopen("congin.txt","r");
	fo= fopen("congout.txt","w+");
	
	int a,b,s;
	fscanf(fi,"%d%d",&a,&b);
	for(int i=0;i<)
	s=a+b;
	fprintf(fo,"%d",s);
	fclose(fi);
	fclose(fo);
	return 0; 
	
}

