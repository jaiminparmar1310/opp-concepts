//Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include<stdio.h>

int main()
{
	int a,sum=0,b;
	printf("enter the number :");
	scanf("%d",&a);
	while (a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
		
	}
	printf("sum is =%d",sum);
	
	return 0;
}