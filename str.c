#include<stdio.h>
struct student{
	int rollno;
	char name[50];
	int m,s,e,t;
	float per;
};
int main()
{
 	struct student a[5];
	int i;
	for(i=0; i<2; i++){
	printf("enter rollno:");
	scanf("%d",&a[i].rollno);
	printf("enter name");
	scanf("%s",&a[i].name);
	printf("enter maths marks");
	scanf("%d",&a[i].m);
	printf("enter sci marks");
	scanf("%d",&a[i].s);
	printf("enter english marks");
	scanf("%d",&a[i].e);
}
	printf("rollno\tname\tmaths\tsci\tenglish\ttotal\tper");
	for(i=0; i<2; i++){
	a[i].t=a[i].m+a[i].s+a[i].e;
	a[i].per=(float)a[i].t/3;
	printf("\n%d\t%s\%d\t%d\t%d\t%d\t%d\t%2.f",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);
	}
}