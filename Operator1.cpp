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
	Demo(Demo &ref)
	{
		cout<<"inside copy constructor\n";
	}
	
	void Display()
	{
		cout<<i<<"\t"<<j<<"\n";
	}
	friend Demo operator + (Demo, Demo);
	friend Demo operator * (Demo, Demo);
	friend bool operator > (Demo, Demo);
	friend bool operator ==(Demo, Demo);
};
// 	ret=obj1+obj2;

// Return_value oprator symbol(parameters)
Demo operator + (Demo op1, Demo op2)
{
	cout<<"inside + operaator\n";
	return Demo(op1.i+op2.i, op1.j+op2.j);
}

Demo operator * (Demo op1, Demo op2)
{
	cout<<"inside + operaator\n";
	return Demo(op1.i*op2.i, op1.j*op2.j);
}

bool operator > (Demo op1, Demo op2)
{
	if((op1.i>op2.i)&&(op1.j>op2.j))
	{
		return true;
	}
	else
	{
		return false;
	} 
}

bool operator ==(Demo op1, Demo op2)
{
	if((op1.i==op2.i)&&(op1.j==op2.j))
	{
		return true;
	}
	else
	{
		return false;
	} 
}

int main()
{
	Demo obj1(11,21);
	Demo obj2(7,5);
	Demo ret(0,0);
	
	ret=obj1+obj2;
	ret.Display();
	
	ret=obj1*obj2;
	ret.Display();
	
	if(obj1> obj2)
	{
		cout<<"obj1 is bigger\n";
	}
	else
	{
		cout<<"obj2 is bigger\n";
	}
	
	
	if(obj1 == obj2)
	{
		cout<<"obj1 and obj2 same\n";
	}
	else
	{
		cout<<"are not same\n";
	}
	
	
	//cout<<ret.i<<"\t"<<ret.j<<"\n";
	return 0;
}