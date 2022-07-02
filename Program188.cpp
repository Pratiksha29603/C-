/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
						
STATEMENT:Write a program which accept one number from user and Position of bit 
			and toggle that bit
Position: 5	
iMask: 0 0 0 0 0 0 0 1	
iMask= iMask<<(5-1)
iMask= iMask<<4

Input:  0 1 1 0 0 1 0 0
iMask:  0 0 0 1 0 0 0 0
Output: 0 1 1 1 0 1 0 0


Number:10 =1010
Position : 4
output: 2= 0010
**********************************************************************************
*/
/*
op1		op2		&		|		^

0		0	 	0		0		0
0	 	1		0		1		1
1	 	0		0		1		1
1	 	1		1		1		0

*/

//iNo	0000 0000 1110 0100 1111 1011 1010
//iPos 6
//iRet 0000 0000 1110 0100 1111 1011 1010
#include<iostream>
 using namespace std;

 int ToggleBit(int iNo, int iPos)
 {
	int iMask= 0x00000001;
	int iResult=0;
	
	if((iPos<1)||(iPos>32)) //filter
	{
		return 0;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	int iValue=0, iRet=0, i=0;
	
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	cout<<"Enter the Position of Bit:\n";
	cin>>i;
	
	iRet=ToggleBit(iValue,i);
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
 }