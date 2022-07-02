#include<iostream>
using namespace std;

void Display(int iNo)
{
	static int iCnt=0;
	iCnt=iNo;
	if(iCnt!=0)
	{
		cout<<iCnt<<"*";
		iCnt--;
		Display(iNo-1);
		
	}


}

int main()
{
	int iValue=0;
	cout<<"Enter Number:"<<"\n";
	cin>>iValue;
	Display(iValue);
	return 0;
}