// WAP to convert years into days and days into years  
 
#include<stdio.h>
int main() {
	int days, years;
	
	printf("Enter number of days: \n");
	scanf("%d",&days);
	
	
	
	years=days/365;
	printf("For given number of days %d coverted number of years is %d \n",days,years);
	
	printf("Enter number of years \n");
	scanf("%d",&years);
	
	
	days=years*365;
		printf("For given number of years %d coverted number of days is %d \n",years,days);
	
	
	
	
	
}