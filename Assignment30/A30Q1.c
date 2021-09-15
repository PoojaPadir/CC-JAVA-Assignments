//write a program which which accept one number and count number of ON(1) bits in it without using % and / //operator

//Input: 11
//Output: 3


#include<stdio.h>
typedef unsigned int UINT;

UINT CountBit(UINT iNo)
{
	UINT iMask=0X00000001,Result=0;
	int iCnt=0,i=0;
	
	for(i=1;i<=32;i++)
	{
		Result=iNo & iMask;
		if(Result==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}
int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=CountBit(iValue);
	printf("Number of ON bits are : %d\n",iRet);
}