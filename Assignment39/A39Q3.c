//Write a recursive program which accept string from user and count white spaces
//Input:HElloWOrlD
//Output: 5

#include<stdio.h>
int Small(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
		Small(str);
	}
	return iCnt;
}
int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter striing\n");
	scanf("%[^'\n']s",arr);
	
	iRet=Small(arr);
	printf("Number of small charcters are : %d",iRet);
	
	return 0;
	
}