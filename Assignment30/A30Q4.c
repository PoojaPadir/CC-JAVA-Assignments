//Write a program which accept one number,two positions from user and check whether bit at first or at second position is on or off

//Input : 10  3  7
//Output : TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo,int iPos1,int iPos2)
{
	UINT Mask=0X00000000,iMask1=0X00000001,Result=0;    // ans=(5-4) + (5-2)
	
	
	Mask=(iMask1<<(iPos1-1)) | (iMask1<<(iPos2-1));
	
	
    Result=iNo & Mask;
	
	if((Result==Mask) || (Result!=0))
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
	int iPos1=0,iPos2=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter 1st position\n");
	scanf("%u",&iPos1);
	printf("Enter 2nd position\n");
	scanf("%u",&iPos2);
	bRet=ChkBit(iValue,iPos1,iPos2);
	if(bRet==TRUE)
	{
		printf("Bits at this postion is on\n");
	}
	else
	{
		printf("Bits at this position is off\n");
	}
	return 0;
}

