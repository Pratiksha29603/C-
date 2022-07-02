#include<iostream>
using namespace std;
 class Base
 {
	public:
	int x,y;  //charactreristics
	virtual void fun() //1000
	{
		cout<<"Base fun \n";
	}
	
	virtual void gun()  //2000
	{
		cout<<"Base gun\n";
	}
	
	virtual void sun() //3000  
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
	
	virtual void run()  //6000
	{
		cout<<"derived run\n";
	}
 };
 
 int main()
 { 
	cout<<"size of Base:"<<sizeof(Base)<<"\n"; // x+y+Vpointer=(4+4+4)=12 byte
	cout<<"size of Derived:"<<sizeof(Derived)<<"\n";//x+y+i+j+Vpointer=(4+4+4+4+4)=20 bytes
	
      Base *bp= new Derived();
	  bp->fun(); //CALL 1000
	  bp->gun(); // CALL 2000 ????????
	  bp->sun(); // CALL 3000 ????????
 
	 return 0;
 }
 
 
 
 
 