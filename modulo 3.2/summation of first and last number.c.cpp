// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)  

#include<stdio.h>
int main()
{
	int a,sum=0,1digit,2digit;
	
	printf("enter number = ");
	scanf("%d",&a);
	
	2digit = a%10;
	while (a>=10)
	{
		a=a/10;
		
	}
	1digit =a;
	
	sum =1digit+2digit;
	
	printf("sum of 1digit and 2digit =%d",sum);
	
	return 0;
}