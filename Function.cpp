#include<iostream>
using namespace std;

void fun(int x)  //call by value
{
	x++;
}

void gun(int *p)  //call by address
{
	(*p)++;
}

void sun(int &ref)  //call by reference
{
	ref++;
}

int main()
{
	int a=10,b=10,c=10;
	cout<<"before call to fun:"<<a<<"\n"; //10
	fun(a); //fun(10);
	cout<<"after call to fun:"<<a<<"\n"; //10
	
	cout<<"before call to gun:"<<b<<"\n"; //10
	gun(&b); //gun(920);
	cout<<"after call to gun:"<<b<<"\n"; //11
	
	cout<<"before call to Sun:"<<c<<"\n"; //10
	sun(c); //Sun(10);
	cout<<"after call to Sun:"<<c<<"\n"; //11
	
	return 0;
}