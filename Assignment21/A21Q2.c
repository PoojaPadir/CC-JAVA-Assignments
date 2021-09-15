//Accept character from user and check whether it is capital or not (A-Z)
//Input: F
//Output: TRUE

//Input: p
//Output: FALSE


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCap(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("Enter the chracter\n");
	scanf("%c",&cValue);
	
	bRet=ChkCap(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is capital character\n");
	}
	else
	{
		printf("It is not capital chracter\n");
	}
	
	return 0;
}