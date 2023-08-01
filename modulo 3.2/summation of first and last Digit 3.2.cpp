// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)  

#include<stdio.h>
int main()
{
	int a,sum=0,firstdigit,lastdigit;
	
	printf("enter number = ");
	scanf("%d",&a);
	
	lastdigit = a%10;
	while (a>=10)
	{
		a=a/10;
		
	}
	firstdigit =a;
	
	sum =firstdigit+lastdigit;
	
	printf("sum of firstdigit and lastdigit =%d",sum);
	
	return 0;
}