//write a program which which accept one number and toggle contents of first and last nibble of the number.Return modified number.(Nibble is a group of 4 bits)

//Input: 10 2
//Output: 8


#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask=0XF000000F,Result=0;
	
	Result=iNo ^ iMask;
	return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=ToggleBit(iValue);
	printf("Modified number is : %u\n",iRet);
}