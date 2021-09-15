//Write a program which accept number from user and return the count of even digits 

//Input: 2395
//Output: 1

//Input: 1018
//Output:2
   
//Input: -1018
//Output: 2

//Input:8462
//Output: 4

#include<stdio.h>

int CountEven(int iNo)
{
	int count=0,digit;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		digit=iNo%10;
		if(digit%2==0)
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
	
	iRet=CountEven(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
