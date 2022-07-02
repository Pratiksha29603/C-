#include<iostream>
using namespace std;
 class Base
 {
	public:
	int x,y;  //charactreristics
	void fun() //1000
	{
		cout<<"Base fun \n";
	}
	
	void gun()  //2000
	{
		cout<<"Base gun\n";
	}
	
	void sun() //3000  
	{
		cout<<"Base sun\n";
	}
 };
 
 class Derived:public Base
 {
	public:
	int i,j;
	void gun() //4000
	{
		cout<<"derived gun\n";
	}
	
	void sun() //5000
	{
		cout<<"derived sun\n";
	}
	
	void run()  //6000
	{
		cout<<"derived run\n";
	}
 };
 
 int main()
 { 
      Base *bp= new Derived();
	  bp->fun(); //CALL 1000
	  bp->gun(); // CALL 2000 ????????
	  bp->sun(); // CALL 3000 ????????
 
	 
 }
 
 
 
 
 