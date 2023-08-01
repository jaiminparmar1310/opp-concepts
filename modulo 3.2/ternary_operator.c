//WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main()
{
	int a;
	printf("enter any number : \n");
	scanf("%d",&a);
	(a%2)? printf("%d is odd number",a) : printf("%d is even number",a);
	
	return 0;
	
}