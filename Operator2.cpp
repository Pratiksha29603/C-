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
	friend Demo operator +(Demo);
	friend Demo operator - (Demo);
};

Demo operator -(Demo op) // unary operator
{
	return Demo(-op.i,-op.j);
}

Demo operator +(Demo op) // unary operator
{
	return Demo(op.i,op.j);
}

int main()
{
	/*int i=10;
	int j=0;
	j=-i;*/
	
	Demo obj1(11,21);
	Demo ret(0,0);
	ret=+obj1;  //ret=+(obj1);
	ret.Display();
	
	ret=-obj1;  //ret=-(obj1);
	ret.Display();
	return 0;
}