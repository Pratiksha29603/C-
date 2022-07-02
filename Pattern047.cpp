#include<iostream>
using namespace std;

class Pattern
{
	public :
		int iNo;
	public:
		
		void GetInput();
		void Display();
};

void Pattern::GetInput()
{
	cout<<"Enter Number:"<<"\n";
	cin>>iNo;
}

void Pattern::Display()
{
	static int iCnt=0;
	iCnt=iNo;
	`if(iCnt!=0)
	{
		cout<<iCnt<<"*";
		iCnt--;
		Display();
	}	
}

int main()
{
	Pattern pobj;
	pobj.GetInput();
	pobj.Display();
	return 0;
}