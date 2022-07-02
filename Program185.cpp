/*
****************************PROBLEM**************************
						in C++
STATEMENT: Addition of two numbers
Input:10+10
Output:20				

*************************************************************************************
*/
#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
	return iNo1+iNo2;
}

int main()
{
	int iNo1=0, iNo2=0, iRet=0;
	cout<<"Enter first number\n";
	cin>>iNo1;
	
	cout<<"Enter second number\n";
	cin>>iNo2;
	
	iRet=Addition(iNo1,iNo2);
	cout<<"Addition of two number is:\t"<<iRet<<"\n";
	return 0;
}
