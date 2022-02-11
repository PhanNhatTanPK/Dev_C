#include<stdio.h>
int n,s,a;
int main(){
	 
     
		printf("nhap n: ");
		scanf("%d",&n);
		a=0;
	    while(n>0)
		 {
		 	s=n%10;
		 	a=a*10+s;
		 	n/=10;
	     }
	    printf("so can tim la: %d",a);
	 
	 return 0;
}
