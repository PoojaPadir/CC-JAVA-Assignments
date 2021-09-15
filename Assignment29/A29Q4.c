//write a program which which accept one number and position from user and toggle the bit at that position.Return modified number.

//Input: 10 2
//Output: 8


#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo,int iPos)
{
	UINT iMask=0X00000001,Result=0;
	iMask=iMask << (iPos-1);
	Result=iNo ^ iMask;
	return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
	int iPos=0;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter position\n");
	scanf("%d",&iPos);
	
	iRet=OnBit(iValue,iPos);
	printf("Modified number is : %u\n",iRet);
}