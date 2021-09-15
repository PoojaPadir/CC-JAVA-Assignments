//Write a recursive program which accept number from user and return summation of its digits
//Input: 879
//Output:24
#include<stdio.h>
int Sum(int iNo)
{
	static int iSum=0;
	int iDigit=0;
	if(iNo>0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		iSum=iSum+iDigit;
		Sum(iNo);
	}
	return iSum;
	
}
int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Sum(iValue);
	printf("Addition of digits are: %d\n",iRet);
	
	return 0;
}