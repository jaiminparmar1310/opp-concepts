// WAP to swap two numbers without using third variable 

#include<stdio.h>

int main()
{
	int x,y;
	printf("enter value of x : \n");
	scanf("%d",&x);
	
	printf("enter value of y : \n");
	scanf("%d",&y);
	printf("before swapping value of x is %d and y is %d \n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	    
	    printf("after swapping value of x is %d and y is %d \n ",x,y);


}