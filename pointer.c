 #include<stdio.h>
int main()
{
  int a=9,b=8,*p,*q;
	 printf("value of a is:%d",a);
	 printf("\n value of b is:%d",b);
               p=&a;
	 q=&b;
               *p=*p+*q;
	 *q= *p-*q;
	  *p=*p-*q;
	 printf("\n a value is %d",*p);
	 printf("\n b value is %d",*q);

	 printf("\n a address is %d",&p);
	 printf("\n b address is %d",&q);
}
 

	

