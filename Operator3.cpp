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
		friend Demo operator ++ (Demo &);
		friend Demo operator ++ (Demo & op, int);
};
 Demo operator ++ (Demo & op) // operator overloading by call by reference
 {
	op.i++;  //Pre Inc
	op.j++;
	return op;
 }
 
 Demo operator ++ (Demo & op, int) // operator overloading by call by reference
 {
	Demo temp(op.i,op.j);
	op.i++;  //post Inc
	op.j++;
	return temp;
 }
 
int main()
{
	Demo obj1(10,20);
	Demo ret1(0,0);
	
	Demo obj2(10,20);
	Demo ret2(0,0);
	 
	 ret1=++obj1;  // Pre Inc
	 cout<<"Demo of Pre Inc\n";
	 ret1.Display();// 11  21
	 obj1.Display();
	 
	 ret2=obj2++;  // Post Inc
	 cout<<"Demo of Post Inc\n";
	 ret2.Display();// 10  20 
	 obj2.Display(); //11  21
	return 0;
}