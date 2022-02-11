#include<stdio.h>
int i,thang;
float tien,tiennhan;
int main(){
	printf("nhap tien,thang\n");
	scanf("%f%d",&tien,&thang);
	tiennhan=tien;
    for(i=1;i<=thang;i++)
    {
	  if(thang<=5) tiennhan=tiennhan+tiennhan*(6.0/100.0);
	  else if(thang<=12) tiennhan=tiennhan+tiennhan*(6.6/100.0);
	  else if(thang<=14) tiennhan=tiennhan+tiennhan*(7.5/100.0);
	  else if(thang<=17) tiennhan=tiennhan+tiennhan*(7.6/100.0);
	  else if(thang<=23) tiennhan=tiennhan+tiennhan*(7.7/100.0);
	  else if(thang<=35) tiennhan=tiennhan+tiennhan*(8.0/100.0);
	  else if(thang>36) tiennhan=tiennhan+tiennhan*(8.5/100.0);
    }
	printf("tien nhan duoc la:%f",tiennhan);
    return 1;
}
