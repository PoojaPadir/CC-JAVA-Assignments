//Write a program which accept one number from user and check whether 9th or 12th bit is on or off

//Input : 257
//Output : TRUE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0X00000900,Result=0;
	
    Result=iNo & iMask;
	
	if((Result==iMask) || (Result!=0))
	{ 
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	UINT iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	bRet=ChkBit(iValue);
	if(bRet==TRUE)
	{
		printf("9th or 12th bit is on\n");
	}
	else
	{
		printf("9th or 12th bit is off\n");
	}
	return 0;
}