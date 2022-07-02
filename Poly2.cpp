#include<iostream>
using namespace std;
 class Base
 {
	public:
	int x,y;  //charactreristics
	void fun() 
	{
		cout<<"Base fun 1\n";
	}

	void gun()  //defination
	{
		cout<<"Base gun\n";
	}
	
	void sun()  //defination
	{
		cout<<"Base sun\n";
	}
 };
 
 class Derived:public Base
 {
	public:
	int i,j;
 };
 
 int main()
 { 
 
	 char ch='A';
	 int no=10;
	 
	 char *cp1=&ch; //no casting
	 int *ip1=&no; //no casting
	 
	 char *cp2= (char*)&no; //up casting
	 int *ip2= (int*)&ch;  //down casting
	 
	 Base *bp1= new Base(); // no casting
	 Derived *dp1= new Derived(); //No Casting
	 
	 Base *bp2= new Derived(); //Up casting
	 //Derived *dp2= new Base(); //Down casting
	 
	 
	 return 0;
 }
 
 
 
 
 