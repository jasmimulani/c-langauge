#include<stdio.h>
 struct bill{
	
             float rate, qty,amt,dis,billamt,gst,netbill;
	int productno;
	char name[50];
};
int main()
{
	struct bill a[10];
	 int i;
	for(i=0; i<5; i++){
	printf("enter productno:");
	scanf("%d",&a[i].productno);
	printf("enter a name:");
	scanf("%s",&a[i].name);
	printf("enter a qty:");
	scanf("%f",&a[i].qty);
	printf("enter a rate:");
	scanf("%f",&a[i].rate);
}
    printf("productno\tname\tqty\trate\tamt\tdis\tbillamt\tgst\tnetbill");
    for(i=0; i<5; i++){
    a[i].amt=a[i].qty*a[i].rate; 
    a[i].dis=(a[i].amt*5)/100;
     a[i].billamt=a[i].amt-a[i].dis;
     a[i].gst=(a[i].billamt*18)/100;
    a[i].netbill=a[i].billamt+a[i].gst;
   printf("\n%d\t\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",a[i].productno,a[i].name,a[i].qty,a[i].rate,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
	}
}
	


                 	