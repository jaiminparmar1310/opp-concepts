//loop pogram :
// Sum of odd numbers  WAP to print table up to given numbers 

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	
	printf("enter number of terms : ");
	scanf("%d",&n);
	printf("\n the odd number of are : ");
	for(i=1;i<n;i++)
	{
		printf("%d",2*i-1);
		sum+=2*i-1;
		
	}
	printf("\n the sum of odd narural number upto %d terms : %d \n",n,sum);
	
	
}