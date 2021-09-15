//write a program which which accept one number and position from user and check whether bit at that position is on or off.If bit is one return TRUE otherwisw return FALSE. 

//Input: 10 2
//Output: TRUE


#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos)
{
	UINT iMask=0X00000001,Result=0;
	iMask=iMask << (iPos-1);
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
	int iPos=0;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter position\n");
	scanf("%d",&iPos);
	
	bRet=ChkBit(iValue,iPos);
	
	if(bRet==TRUE)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
}