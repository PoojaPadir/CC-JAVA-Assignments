//write a program which accept string from user and accept one character.Return frequency of that character
//Input: "Marvellous Multi OS
//        M
//Output: 2

//Input: "Marvellous Infosystems"
//        W
//Output: 0

#include<stdio.h>

int CountChar(char *str,char ch)
{
	int iCnt=0;
 while(*str!='\0')
 {
	 if(*str==ch)
	 {
		 iCnt++;
	 }
	 str++;
 }
 if(iCnt!=0)
 {
	 return iCnt;
 }
 else
 {
	 return 0;
 }
}
int main()
{
	char arr[20],cValue='\0';
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	printf("Eneter chracter to be search");
	scanf(" %c",&cValue);
	
	iRet=CountChar(arr,cValue);
    
	printf("Character is present %d times\n",iRet);
	return 0;
	
	
}