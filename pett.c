#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	text:
	if(i<=5 )
	printf("%d",i);
	i++;
	{ 
		j=1;
		if(j<=5)
	            printf("%d",j);
 	             j++;
	goto text;
	}
}