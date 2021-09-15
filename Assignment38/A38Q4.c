//write a recursive program which accept number from user and return its factorial
//Input: 5
//Output: 120

#include<stdio.h>

int factorial(int iNo)
{
	 
	if(iNo>0)
	{
		//fact=fact*iNo;
		//iNo--;
		return iNo*factorial(iNo-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int iRet=0,iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=factorial(iValue);
	printf("Fatorial is: %d\n",iRet);
	
	return 0;
}