//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class test
{
	private :
		int x,y;
		
	public :
	   void input()
	   {
	   	cout<<"enter two numberm  :";
	   	cin >>x>>y;
	   }
	   friend void find(test t);
};
void find(test t)
{
   	if(t.x>t.y)
   	{
   		cout<<"largest is :"<<t.x;
	}
	else
	{
		cout<<"largest is:"<<t.y;
	}
   	
}
int main()
{
	test t;
	t.input();
	find(t);
	
	return 0;
}

