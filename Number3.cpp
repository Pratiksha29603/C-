/* 	*****************PROBLEMS ON NUMBER**************************

STATEMENT: Accept the number from user and print the number in reverse order 
			from that number to 1.(using while loop)
INPUT:12
OUTPUT: 12,11,10,9,8,7,6,5,4,3,2,1
*/

#include<iostream>
using namespace std;
 
 void Display(int iNo)
 {
	int iCnt=0;
	if(iNo==0)
	{
		cout<<"Invalid Input"<<"\n";
	}
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iCnt=iNo;
	while(iCnt>=1)
	{
		cout<<"Reverse Order is:"<<iCnt<<"\n";
		iCnt--;
	}
	
 }
 
 int main()
 {
	int iValue=0;
	cout<<"Enter a Number";
	cin>>iValue;
	
	Display(iValue);
	return 0;
	
 }