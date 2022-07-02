/* 	*****************PROBLEMS ON Digit**************************

STATEMENT: Accept number from user and print the reverse order of Digit from that number
			with hardcode values.

INPUT:1215
OUTPUT:5121
*/

#include<iostream>
using namespace std;

int main()
{
	int iNo=1215, iDigit=0;
	
	cout<<"Number is:"<<iNo<<"\n";
	
	iDigit=iNo%10;
	cout<<"Reverse is:"<<iDigit;
	iNo=iNo/10;
	
	iDigit=iNo%10;
	cout<<iDigit;
	iNo=iNo/10;
	
	iDigit=iNo%10;
	cout<<iDigit;
	iNo=iNo/10;
	
	iDigit=iNo%10;
	cout<<iDigit;
	iNo=iNo/10;
	
	return 0;
	
	
	
	
}
 
 