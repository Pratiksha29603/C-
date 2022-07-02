/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
						
STATEMENT:Write a program which accept one number from user and count the number
			of bits are ON 

Input:4095
output: 12 bits are on
**********************************************************************************
*/
/*
op1		op2		&		|		^

0		0	 	0		0		0
0	 	1		0		1		1
1	 	0		0		1		1
1	 	1		1		1		0

*/


#include<iostream>
 using namespace std;

 int CountBit(int iNo)
 {
	int i=0, iCnt=0, iResult=0;
	int iMask= 0x00000001;
	
	for(i=1;i<32;i++)
	{
		iResult=iNo&iMask;
		
		if(iResult!=0)
		{
			iCnt++;
		}
		iMask=iMask<<1;
		/*
			00000001
			00000010
			00000100
			00001000
			00010000
			00100000
			01000000
			10000000
		*/
	}
	return iCnt;	
 }
 
 int main()
 {
	int iValue=0, iRet=0;
	
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	iRet=CountBit(iValue);
	cout<<"Number of bits which are ON:"<<iRet<<"\n";
	return 0;
 }