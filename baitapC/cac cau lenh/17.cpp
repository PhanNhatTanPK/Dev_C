#include<stdio.h>
int i,j,z,n,k,s1,s2,s3,S;
int main(){
	printf("nhap n va k\n");
	scanf("%d%d",&n,&k);
	s1=1;
	s2=1;
	for(i=2;i<=n;i++) s1=s1*i;
	for(j=2;j<=k;j++) s2=s2*j;
	if(n<0) printf("nhap lai n\n");
    if(k==0||k>n) printf("nhap lai k\n");
    for(z=2;z<=s1-s2;z++) s3=s3*z;
	S=s1/(s2*s3);
	printf("gia tri cua S la: %d",S);
	return 1;
}
