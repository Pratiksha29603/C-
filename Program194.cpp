/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
						
STATEMENT:Write a program which accept one number from user and toggle last 4 
			and first 4 bit of that number.
NUmber: 240			
iStart=5
iEnd=16
Output:65280
	// 0000 0000 0000 0000 0000 0000 0000 0000
	
	// 0000 0000 0000 0000 1111 1111 1111 0000

	//  0   0    0    0    0    0    0    0
	
iMask1= 0xffffffff;
1111 1111 1111 1111 1111 1111 1111 1111 
iMask2= 0xffffffff;

iMask1= iMask1<<(iStart-1);
1111 1111 1111 1111 1111 1111 1111 0000

iMask2=iMsk2>>(32-iEnd);
0000 0000 0000 0000 1111 1111 1111 1111 

	
**********************************************************************************
*/

#include<iostream>
 using namespace std;
typedef unsigned int UINT;
 
 UINT ToggleNibble(UINT iNo, int iStart, int iEnd)
 {
	UINT iMask1= 0xffffffff, iMask2=0xffffffff;
	UINT iMask=0, iResult=0;
	iMask1= iMask1<<(iStart-1);
	iMask2= iMask2>>(32-iEnd);
	iMask= iMask1&iMask2;
	iResult= iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	UINT iValue=0, iRet=0, i=0,j=0;
	
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	cout<<"Enter Starting Position:\n";
	cin>>i;
	
	cout<<"Enter Ending Position:\n";
	cin>>j;
	iRet=ToggleNibble(iValue,i,j);
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
 }