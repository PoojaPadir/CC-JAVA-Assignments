//Write a recursive program which accept number from user and return its reverse number
//Input: 523
//Output: 325

#include<stdio.h>
int Reverse(int iNo)
{
	static int rev=0,iDigit=0;
	if(iNo>0)
	{
		iDigit=iNo%10;
		rev=rev*10+iDigit;
		iNo=iNo/10;
		Reverse(iNo);
	}
	return rev;
	
}

int main()
{
	int iRet=0,iValue=0;
	
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	printf("Reverse number is: %d",iRet);
	
	return 0;
	
}