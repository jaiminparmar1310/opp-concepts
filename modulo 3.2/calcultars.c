//? WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)  

#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int q,w;
		
	printf("enter 2 values \n");
	scanf("%d",&q);
	scanf("%d",&w);
	a=q+w;
	b=q-w;
	c=q*w;
	d=q/w;
	e=q%w;
	
	printf("addition of %d \n",a);
	printf("subtraction of %d \n",b);
	printf("multiplication of %d \n",c);
	printf("division of %d \n",d);
	printf("modulo of %d \n",e);
	printf("value of q is %d\n",q);
	printf("value of w is %d\n",w);
	
}