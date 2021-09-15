//write a program which which accept one number from user and toggle 7th and 10th bit of that number.Return modified number.

//Input: 137
//Output: 713

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask=0X00000240,Result=0;
	Result=iNo ^ iMask;
	return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
		
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=ToggleBit(iValue);
	
	printf("Modified number is : %d\n",iRet);
	
	return 0;
}