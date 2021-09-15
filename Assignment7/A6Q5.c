//Write a program which accept number from user and count frequency of such a digits which are less than 6

//Input: 2395
//Output: 3

//Input: 1018
//Output:3
   
//Input: 9440
//Output: 3

//Input:96672
//Output: 1

#include<stdio.h>

int Count(int iNo)
{
	int count=0,digit;
	
	while(iNo>0)
	{
		digit=iNo%10;
		if(digit<6)
		  count++;
		iNo=iNo/10;
	}
	return count;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
