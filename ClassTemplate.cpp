#include<iostream>
using namespace std;

class Array
{
	public:
		int *Arr;
		int iSize;
		Array(int length=10)
		{
			iSize=length;
			Arr=new int[iSize];
		}
		
		~Array()
		{
			delete []Arr;
		}
		
		void Accept() //seter method
		{
			int i=0;
			cout<<"Enter the elements\n";
			for(i=0;i<iSize;i++)
			{
				cin>>Arr[i];
			}
		}
		
		void Display() //geter method
		{
			int i=0;
			cout<<"Elements are\n";
			for(i=0;i<iSize;i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
};
int main()
{
	Array obj(5);
	obj.Accept();
	obj.Display();
	return 0;
}