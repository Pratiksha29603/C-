/* 	*****************PROBLEMS ON NUMBER**************************

STATEMENT: Accept the number from user and print the addition of two numbers
			using function.

INPUT:20+20
OUTPUT: 40
*/


#include<iostream>
using namespace std; 

int Addition(int , int);
int main()
 {
	int iValue1=0,iValue2,iRet=0;
	cout<<"Enter First number:"<<"\n";
	cin>>iValue1;
	
	cout<<"Enter Second number:"<<"\n";
	cin>>iValue2;
	
	iRet=Addition(iValue1,iValue2);
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
	
 }
 
int Addition(int iNo1, int iNo2)
{
	if(iNo1==0 && iNo2==0)
	{
		cout<<"Invalid Input"<<"\n";
	}
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
	int iSum=0;
	iSum=iNo1+iNo2;
	return iSum;
}

 
 