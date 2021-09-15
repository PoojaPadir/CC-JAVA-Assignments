//write a program which accept strinf from user and count number of capital characters
//Input: "Marvellous Multi OS"
//Output: 4

#include<stdio.h>
int CountCap(char *str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=CountCap(arr);
	
	printf("Capital characters are : %d\n",iRet);
	
	return 0;
	
	
}