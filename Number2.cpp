/* 	*****************PROBLEMS ON NUMBER**************************

STATEMENT: Accept the number from user and print the number in reverse order 
			from that number to 1.
INPUT:12
OUTPUT: 12,11,10,9,8,7,6,5,4,3,2,1
*/


#include<iostream>
using namespace std;
void DisplayReverse(int);
int main()
 {
	int iValue1=0;
	cout<<"Enter First number:"<<"\n";
	cin>>iValue1;
	DisplayReverse(iValue1);
	return 0;
}
 
void DisplayReverse(int iNo1)
{
	if(iNo1==0)
	{
		cout<<"Invalid Input"<<"\n";
	}
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	
	int iCnt=0;
	for(iCnt=iNo1;iCnt>=1;iCnt--)
	cout<<"Reverse order is:"<<iCnt<<"\n";
}

 
 