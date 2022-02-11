#include<stdio.h>
int thang,i;
float tiengui, lai, tongtien;
int main(){
	printf("nhap tiengui,tongtien,lai\n");
	scanf("%f",&tiengui);
	scanf("%f",&tongtien);
	scanf("%f",&lai);
	thang=0;
	while(tiengui<tongtien)
	{
		tiengui=tiengui +tiengui*(lai);
		thang++;
	}
	printf("so thang can gui la: %d",thang);
	return 0;
}
