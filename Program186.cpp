/*
****************************PROBLEMS ON LIBRARY **************************
						in C++
STATEMENT:Library development
Input:
Output:			

*************************************************************************************
*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

class MarvellousFile
{
	public:
	char fname[30];
	int fd;
	MarvellousFile(char *Name) //constructor
	{
		strcpy(fname,Name);
		fd=open(fname,O_RDWR);
	}
	
	~MarvellousFile()
	{
		close(fd);
	}
	
	void Display()
	{
		int iRet=0,i=0,iCnt=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			write(1,Buffer,iRet);
		}
	}
	
	int CountCapital()
	{
		int iRet=0, i=0, iCnt=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='A')&&(Buffer[i]>='Z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	int CountSmall()
	{
		int iRet=0, i=0, iCnt=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='a')&&(Buffer[i]>='z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	int CountDigit()
	{
		int iRet=0,i=0,iCnt=0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet=read(fd,Buffer,10))!=0)
		{
			for(i=0;i<iRet;i++)
			{
				if((Buffer[i]>='0')&&(Buffer[i]>='9'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
};

int main()
{
	char Name[30];
	int iRet=0;
	cout<<"Enter file Name:\n";
	cin>>Name;
	
	MarvellousFile obj(Name);
	
	obj.Display();
	
	
	iRet=obj.CountCapital();
	cout<<"Capital letters:"<<iRet<<"\n";
	
	iRet=obj.CountSmall();
	cout<<"Small letters:"<<iRet<<"\n";
	
	iRet=obj.CountDigit();
	cout<<"Digit are:"<<iRet<<"\n";
	
	return 0;
}
