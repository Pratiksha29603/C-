#include<iostream>
using namespace std;

int main()
{
	int i=10, j=10;
	int x,y;
	
	 x=i++; //Post Inc
	 
	 y=++j;  //Pre Inc
	 
	 cout<<x<<"\n";  //10
	 cout<<y<<"\n";  //11
	 
	 cout<<i<<"\n";  //11
	 cout<<j<<"\n";  //11
	 return 0;
}