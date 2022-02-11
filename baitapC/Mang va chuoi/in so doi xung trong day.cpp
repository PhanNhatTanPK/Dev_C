#include<stdio.h>
 
int daoNguoc(int number) {
    int res = 0;
    while (number > 0) {
        res = res * 10 + number % 10;
        number /= 10;
    }
    return res;
}
 
bool isCheck(int number) {
    if (number == daoNguoc(number))
        return true;
    return false;
    /*
    return (number == daoNguoc(number));
    */
}
 
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
}
int main() {
    int n, a[100];
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    nhap(a, n);
    for (int i = 0; i < n; i++)
       if (isCheck(a[i])) sum=1;
       printf("cac so doi xung la:\n");
    for (int i = 0; i < n; i++)        
     if(sum==1)printf(" %d", a[i]);
    return 0;
}
 
