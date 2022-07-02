#include<iostream>
using namespace std;
 class Base
 {
	public:
	int x,y;  //charactreristics
	void fun(int i) //function overloading
	{
		cout<<"Base fun 1\n";
	}
	
	void fun(int i, int j) //function overloading
	{
		cout<<"Base fun 2\n";
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
	void mun() // defination
	{
		cout<<"derived mun\n";
	}
	
	void gun()  //redefination
	{
		cout<<"derived gun\n";
	}
 };
 
 int main()
 { 
	 Derived dobj;
	 dobj.gun(); //when u call this fun then compiler find nearest fun of object
	 return 0;
 }
 
 
 
 
 