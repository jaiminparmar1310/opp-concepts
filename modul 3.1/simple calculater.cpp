/*Q.1 Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)*/ 

#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	int q,w;
	printf("enter 2 values\n");
	scanf("%d",&q);
	scanf("%d",&w);
	a = q+w;
	b = q-w;
	c = q*w;
	d = q/w;
	e = q%w;
	
	printf("addition of %d \n",a);
	printf("subtraction of %d \n",b);
	printf("multiplication of %d \n",c);
	printf("division of %d \n",d);
	printf("printfmodulo of %d \n",e);
	printf("value of %d \n",q);
	printf("value of %d \n",w);



}