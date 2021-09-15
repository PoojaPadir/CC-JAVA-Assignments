//write a program which which accept one number from user and toggle 7th bit of that number.Return modified number.

//Input: 73
//Output: 79


#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT iMask=0X0000000F,Result=0;
	Result=iNo | iMask;
	return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
		
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=OnBit(iValue);
	
	printf("Modified number is : %d\n",iRet);
	
	return 0;
}