/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
						
STATEMENT:Write a program which accept one number from user and toggle last 4 
			and first 4 bit of that number.
Position: 5	7
iMask: 0 1 0 1 0 0 0 0	
iMask= iMask<<(5-1)
iMask= iMask<<4

Input:  0 1 1 0 0 1 0 0
^
iMask:  0 1 0 1 0 0 0 0
----------------------------
Output: 0 0 1 1 0 1 0 0



Number:11 =1011
Position : 4026531844
output: 
**********************************************************************************
*/
#include<iostream>
 using namespace std;
typedef unsigned int UINT;
 
 UINT ToggleNibble(UINT iNo)
 {
	UINT iMask= 0xf000000f;
	// 1111 0000 0000 0000 0000 0000 0000 1111
	//  f    0    0    0    0    0    0    f
	UINT iResult=0;
	
	iResult=iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	UINT iValue=0, iRet=0;
	
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	iRet=ToggleNibble(iValue);
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
 }