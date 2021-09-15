//Write a program which accept one numberand range of positions from user.Toggle all the bits from that position and return modified number.
//Input : 897   9  13
//Output : 879

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos1,int iPos2)
{
	UINT Mask=0X00000000,iMask=0X00000001,Result=0;    // ans=(5-4) + (5-2)

    
	for(i=iPos1;i<=iPos2;i++)
	{
		iMask=iMask<<(iPos1-1);
		Result=iNo ^ iMask;
	}
	
    return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
	int iPos1=0,iPos2=0;
	
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter 1st position\n");
	scanf("%u",&iPos1);
	printf("Enter 2nd position\n");
	scanf("%u",&iPos2);
	iRet=ChkBit(iValue,iPos1,iPos2);
	printf("%d\n",iRet);
	return 0;
}
