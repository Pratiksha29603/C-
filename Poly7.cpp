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
	
	virtual ~Base() =0; //2000
	void fun()
	{
		cout<<"Base fun\n";
	}
	
	
 };
 Base::~Base()
 {}
 
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

    Derived dobj;
	dobj.fun();
	 return 0;
 }
 
 
 
 
 