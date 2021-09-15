//write a program which accept string from user and check whether it contains vowels or not.
//Input: "MarvellouS"
//Output: TRUE

//Input: "xyz"
//Output: FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
		{
		  iCnt++;	
		}
		str++;
	}
	if(iCnt!=0)
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
	char arr[20];
	BOOL bRet=FALSE;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	bRet=ChkVowel(arr);
	if(bRet==TRUE)
	{
		printf("It contains vowel\n");
	}
	else
	{
		printf("It does not contain vowel\n");
	}
	
	return 0;
	
	
}