#include<stdio.h>
int a;
int main(){
	a=1;
	do {	if(a%10==0)
	printf("%d  ",a);
	a++;}
	while(a<=1000);
	return 1;
	 
}
