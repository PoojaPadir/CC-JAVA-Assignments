//Write a recursive program which accept string from user and count white spaces
//Input:HE llo WOr lD
//Output: 3

#include<stdio.h>
int WhiteSpaces(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpaces(str);
	}
	return iCnt;
}
int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter striing\n");
	scanf("%[^'\n']s",arr);
	
	iRet=WhiteSpaces(arr);
	printf("White spaces are: %d",iRet);
	
	return 0;
	
}