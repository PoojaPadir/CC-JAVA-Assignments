//write a program which which accept one number from user and toggle 7th bit of that number.Return modified number.

// 0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0 

//  iNo   0 0 1 0  0 1 0 0  0 1 0 1       //Input: 137
//   ^                                    //Output: 201        
//  iMask 0 0 0 0  0 1 0 0  0 0 0 0
//____________________________________
// Result 0 0 0 0  0 0 0 0  0 1 0 1

//  iNo   0 0 1 0  1 0 0 0  0 1 0 1       //Input: 645
//   ^                                    //Output: 709        
//  iMask 0 0 0 0  0 1 0 0  0 0 0 0
//____________________________________
// Result 0 0 1 0  1 1 0 0  0 1 0 1


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask=0X00000040,Result=0;
	Result=iNo ^ iMask;
	return Result;
}
int main()
{
	UINT iValue=0,iRet=0;
		
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=OffBit(iValue);
	
	printf("Modified number is : %d\n",iRet);
	
	return 0;
}