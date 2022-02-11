#include<stdio.h>
int ngay,thang,nam;
int main(){
	printf ("nhap thang, nam:");
	scanf ("%d%d",&thang, &nam);
	switch (thang){
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 10:
	    case 12: ngay = 31; 
	    break;
	    case 4:
	    case 6:
	    case 9:
	    case 11: ngay=30;
	    break;
	    case 2: if(nam%4==0) ngay=29;
	            else ngay= 28;
	            break;
	    default: ngay=0;
	}
	if(ngay==0) printf(" nhap sai thang");
	else printf("\n %d thang, %d nam co %d ngay", thang, nam, ngay);
	return 1;
}
