#include<iostream>
using namespace std;
 class Demo
 {
	public:
	int i,j;
	
	Demo(int x=10,int y=20)
	{
		i=x;
		j=y;
	}

};
// 	ret=obj1+obj2;

// Return_value oprator symbol(parameters)
Demo operator + (Demo op1, Demo op2)
{
	return Demo(op1.i+op2.i, op1.j+op2.j);
}

int main()
{
	Demo obj1(11,21);
	Demo obj2(7,5);
	Demo ret(0,0);
	
	ret=obj1+obj2;
	cout<<ret.i<<"\t"<<ret.j<<"\n";
	return 0;
}