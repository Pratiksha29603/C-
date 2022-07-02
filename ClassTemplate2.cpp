#include<iostream>
using namespace std;

class Array
{
	public:
		int *Arr;
		int iSize;
		Array(int);
		~Array();
		void Accept(); //seter method
		void Display() //geter method		
};
Array::Array(int length)
{
	iSize=length;
	Arr=new int[iSize];
}
Array::~Array()
{
	delete []Arr;
}
		
Array::void Accept() //seter method
{
	int i=0;
	cout<<"Enter the elements\n";
	for(i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
}
		
Array::void Display() //geter method
{
	int i=0;
	cout<<"Elements are\n";
	for(i=0;i<iSize;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}

int main()
{
	Array obj(5);
	obj.Accept();
	obj.Display();
	return 0;
}