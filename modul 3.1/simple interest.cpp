#include<stdio.h>
int main()
{
  int si,time,rate,p;
  
  printf("enter priciple balance :");
  scanf("%d",&p);
  
  printf("enter time :");
  scanf("%d",&time);
  
  printf("enter rate :");
  scanf("%d",&rate);
  
  si=p*(1+rate*time);
  printf("simple intrest given vallue is",si);
}