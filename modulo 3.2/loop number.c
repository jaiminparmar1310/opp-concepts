//looping pogram :
//2. WAP to take 10 no. Input from user and find out … 

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("input the 10 number : \n");
	for (i=1;i<=10;i++)
	
	{
		printf("number-%d : ",i);
		scanf("%d",&n);
		sum +=n;
	}
	
	avg=sum/10.0;
	printf("the sum of 10 no is : %d\n the average is : %f\n",sum,avg);
	
}	