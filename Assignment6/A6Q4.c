//Write a program which accept number from user and count frequency of 4 in it 

//Input: 2395
//Output: 0

//Input: 1018
//Output:0
   
//Input: 456342
//Output: 2

//Input: 327847
//Output: 1

#include<stdio.h>

int CountFour(int iNo)
{
	int count=0,digit;
	
	while(iNo>0)
	{
		digit=iNo%10;
		if(digit==4)
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
	
	iRet=CountFour(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
