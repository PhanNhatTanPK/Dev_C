#include<stdio.h>
int thang,i;
float tien, tong, lai,laithang;
int main()
{
   printf("nhap tien, thang, lai\n");
   scanf("%f",&tien);
   scanf("%d",&thang);
   scanf("%f",&lai);
	tong=tien;
	for(i=1;i<thang;i++)
	{
		laithang = tong * (lai /100.0);
        tong += laithang;
	}
	printf("Tong la: %.2f", tong);
	return 0;
}
