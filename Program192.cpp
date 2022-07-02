/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
						
STATEMENT:Write a program which accept one number from user and 2 Position 
			and toggle that bit
Position: 5	7
iMask: 0 1 0 1 0 0 0 0	
iMask= iMask<<(5-1)
iMask= iMask<<4

Input:  0 1 1 0 0 1 0 0
^
iMask:  0 1 0 1 0 0 0 0
----------------------------
Output: 0 0 1 1 0 1 0 0


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

 int ToggleBit(int iNo, int iPos1, int iPos2)
 {
	int iMask1= 0x00000001;
	int iMask2= 0x00000001;
	int iMask=0;
	int iResult=0;
	
	if((iPos1<1)||(iPos1>32)) //filter
	{
		return 0;
	}
	
	if((iPos2<1)||(iPos2>32)) //filter
	{
		return 0;
	}
	
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iMask=iMask1|iMask2;
	
	iResult=iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	int iValue=0, iRet=0, i1=0, i2=0;
	
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	cout<<"Enter the first Position of Bit:\n";
	cin>>i1;
	
	cout<<"Enter the second Position of Bit:\n";
	cin>>i2;
	
	iRet=ToggleBit(iValue, i1, i2);
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
 }