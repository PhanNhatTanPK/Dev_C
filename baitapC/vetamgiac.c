#include <stdio.h>

int main() {
   int n,i,j,q;

   n = 5;

   printf("Ve tam giac sao vuong can:\n\n");
   for(i =0 ; i<n ; i++) 
   {
      for(j = 0; j <n-i; j++)
         printf(" ");
      for(q=j;q<=n;q++)
         printf("*");
      printf("\n");
   }
   return 0;
}
