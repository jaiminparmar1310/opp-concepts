//loop pogram :
// How many odd numbers are there  

#include<stdio.h>
int main()
{
	int n,count =0;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	
	printf("enter %d elements: \n",n);
	for(int i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		
//		if(num %2 /=0)
		{
			count++;
		}
	}
	printf("the count old number is 5d\n",count);
	return 0;
}