//write a program which which accept one number from user and off 7th and 10th bit of that number if it is on.Return modified number.

// 0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0   0 0 0 0 

//  iNo   0 0 1 0  0 1 0 0  0 1 0 1       //Input: 577
//   &                                    //Output: 1        
//  iMask 1 1 0 1  1 0 1 1  1 1 1 1 
//____________________________________
// Result 0 0 0 0  0 0 0 0  0 1 0 1

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask=0XFFFFFDBF,Result=0;
	Result=iNo & iMask;
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