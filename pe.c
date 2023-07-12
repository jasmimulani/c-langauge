#include<stdio.h>
int main()
{
	int i;
	i=1;
	text:
	if(i<=10){
	printf("%d",i);
	i++;
	goto text; 
	}
}	