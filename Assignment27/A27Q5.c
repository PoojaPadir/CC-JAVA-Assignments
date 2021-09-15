//write a program which checks whether first and last bit is ON or OFF.First bit means bit number 1 and last bit means bit number 32

// 1 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 1 

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0X80000001,Result=0;
	Result=iNo & iMask;
	if(Result==iMask)
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
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
}