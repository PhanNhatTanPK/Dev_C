#include<stdio.h>
int a,b,c;
int main(){
	printf("nhap a va b\n");
	scanf("%d%d",&a,&b);
	c=1;
	while (b>0){
		c*=a;
		b--;
	}
	printf("gia tri cua c la:%d",c);
	return 1;
	
}
