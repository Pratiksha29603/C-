#include<iostream>
using namespace std;

template <class T>
class Array
{
	public:
		T *Arr;
		int iSize;
		Array(int);
		~Array();
		void Accept(); //seter method
		void Display(); //geter method		
};
template <class T>
Array<T>::Array(int length)
{
	iSize=length;
	Arr=new T[iSize];
}

template <class T>
Array<T>::~Array()
{
	delete []Arr;
}

template <class T>		
void Array<T> :: Accept() //seter method
{
	int i=0;
	cout<<"Enter the elements\n";
	for(i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
}

template <class T>		
void Array<T> :: Display() //geter method
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
	Array <int>obj(5);
	obj.Accept();
	obj.Display();
	
	Array <char>obj2(4);
	obj2.Accept();
	obj2.Display();
	return 0;
}