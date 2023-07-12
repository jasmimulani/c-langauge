#include<stdio.h>
void main()
{
	int celsius;
	float fahrenheit;
	printf("enter a celsius:");
	scanf("%d|",&celsius);
	fahrenheit=celsius*(9/5)+32;
	printf("fahrenheit is %f",fahrenheit);
}