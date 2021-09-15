//write a program which checks whether 7th and 15th and 21st and 28th bit is ON or OFF.

// 0 0 0 0   1 0 0 0   0 0 0 1   0 0 0 0   0 1 0 0   0 0 0 0   0 1 0 0   0 0 0 0 

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0X08104040,Result=0;
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