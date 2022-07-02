#include<iostream>
#include<stdbool.h>
using namespace std;
 class Demo
 {
	private:
	int i,j;
	
	public:
	Demo(int x=10,int y=20)
	{
		i=x;
		j=y;
	}
	
	void Display()
	{
		cout<<i<<"\t"<<j<<"\n";
	}
		friend Demo operator --(Demo &);
		friend Demo operator -- (Demo & op, int);
};
 Demo operator -- (Demo & op) // operator overloading by call by reference
 {
	op.i--;  //Pre Dec
	op.j--;
	return op;
 }
 
 Demo operator -- (Demo & op, int) // operator overloading by call by reference
 {
	Demo temp(op.i,op.j);
	op.i--;  //post Dec
	op.j--;
	return temp;
 }
 
int main()
{
	Demo obj1(10,20);
	Demo ret1(0,0);
	
	Demo obj2(10,20);
	Demo ret2(0,0);
	 
	 ret1=--obj1;  // Pre Dec
	 cout<<"Demo of Pre Dec\n";
	 ret1.Display();// 9  19
	 obj1.Display();// 9   19
	 
	 ret2=obj2--;  // Post Dec
	 cout<<"Demo of Post Dec\n";
	 ret2.Display();// 10  20 
	 obj2.Display(); //9    19
	return 0;
}