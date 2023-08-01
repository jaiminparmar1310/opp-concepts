// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven) 

#include<stdio.h>
int main()
 {
 
  int a,b;
  char choice;
  
  printf("enter your choice \n");
  printf("a. adittion \n b. subtraction \n c. multiplication \n d.division \n");
  scanf("%c",&choice);
  
  printf("enter 2 integer number \n");
  scanf("%d %d ",&a,&b);
  
  switch (choice)
  {
  	case 'a' : 
  	printf("%d + %d = %d\n",a,b,(a+b));
  	break;
  	
  	case 'b' : 
  	printf("%d - %d = %d\n",a,b,(a-b));
  	break;
  	
  	case 'c' : 
  	printf("%d * %d = %d\n",a,b,(a*b));
  	break;
  	
  	case 'd' : 
  	if(b!=0)
  	printf("%d / %d = %d\n",a,b,(a/b));
  	
  	else
  	printf("number cant be divided by 0\n");
  	break;
  	
  	default : printf(" you entered wrong choice\n");
 			break;
   } 
   return 0;
 } 