//Write a program which accept number from user and check whether it contains 0 in it or not 

//Input: 2395
//Output: there is no Zero

//Input: 1018
//Output:There is Zero
   
//Input: 9000
//Output: There is Zero

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
	int digit;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		digit=iNo%10;
		if(digit==0)
		  return TRUE;
	    else
		  return FALSE;
		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	
	if(bRet==TRUE)
		printf("There is zero");
	else
		printf("There is no zero");
	
	return 0;
}
