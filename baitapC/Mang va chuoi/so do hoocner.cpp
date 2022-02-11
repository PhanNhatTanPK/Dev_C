 #include <stdio.h>
int  k,n;
float p,x;
float a[100];
 main(void)
  {  
    printf("\nCho bac cua da thuc n = ");
    scanf("\%d",&n); 
    for (k=0;k<=n;k++)
      {
            printf("a[%d] = ",k);
            scanf("%f",&a[k]);
       }
    printf("Cho gia tri x = ");
    scanf("%f",&x);
    p=0.0;
    for (k=0;k<=n;k++)
      p=p*x+a[k];
    printf("Tri so cua da thuc P tai x =%.2f la :%.5f",x,p);

  }
