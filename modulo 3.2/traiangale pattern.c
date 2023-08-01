#include<stdio.h>

int main()
{
	int n,m,i,j;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i =1;i<=n;i++)
	
	{
	  for(m=i;m<n;m++)	
	{
	printf(" ");
    }
	for (j=1;j<=(2*i-1);j++)
	{
		printf("*");
	}
	printf("\n");
}
}
