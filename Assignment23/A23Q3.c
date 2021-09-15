//write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters
//Input: "MarvellouS"
//Output: 6  (8-2)

#include<stdio.h>
int Difference(char *str)
{
	int iCnt1=0,iCnt2=0;
	
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt1++;
		}
		else if(*str>='A' && *str<='Z')
		{
			iCnt2++;
		}
		str++;
	}
	return iCnt1-iCnt2;
}
int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Difference(arr);
	
	printf("%d\n",iRet);
	
	return 0;
	
	
}