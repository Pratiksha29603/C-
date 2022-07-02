#include<iostream>
using namespace std;
 class Base
 {
	public:
	int x,y;  //charactreristics
	Base() //1000
	{
		cout<<"Base Constructor \n";
	}
	
	virtual ~Base()  //2000
	{
		cout<<"Base destructor\n";
	}
	
	
 };
 
 class Derived:public Base
 {
	public:
	int i,j;
	Derived() //1000
	{
		cout<<"Derived Constructor \n";
	}
	
	~Derived()  //2000
	{
		cout<<"Derived destructor\n";
	}
	
 };
 
 int main()
 {  
	cout<<"size of Base:"<<sizeof(Base)<<"\n"; // x+y+Vpointer=(4+4+4)=12 byte
	cout<<"size of Derived:"<<sizeof(Derived)<<"\n";//x+y+i+j+Vpointer=(4+4+4+4+4)=20 bytes
    //Derived dobj;
	Base *dp= new Derived;
	delete dp;
	 return 0;
 }
 
 
 
 
 