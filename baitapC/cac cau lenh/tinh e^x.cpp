#include <stdio.h>
 int x,i;
 float sum,e ,temp;
 int main(){
 	printf("Nhap x: ");
    scanf("%d", &x);
    sum = 1;
     i = 1;
     e=0.0001;
    temp = x;
    while ( temp > e) {
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    printf("e^x: %6f", sum);
    return 0;
}
