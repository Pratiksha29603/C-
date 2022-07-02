#include<iostream>
using namespace std;
 class Demo
 {
	public:
	 inline int Add(int i, int j)
	 {
		return i+j;
	 }
	
	int sub(int , int);
	
 };
 
int Demo::sub(int i, int j)
 {
	return i-j;
 }
 int main()
 {  

    Demo obj;
	int ret=0;
	ret=obj.Add(10,11);
	cout<< "Addition :"<<ret<<"\n";
	ret=obj.sub(11,10);
	cout<< "subtraction :"<<ret<<"\n";
	 return 0;
 }
 
 
 
 
 