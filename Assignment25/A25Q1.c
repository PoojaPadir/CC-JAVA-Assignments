//write a program which accept string from user and accept one character.Check whtether that character is //present in string or not
//Input: "Marvellous Multi OS
//       e
//Output: TRUE

//Input: "Marvellous Infosystems"
//        W
//Output: FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char *str,char ch)
{
   /*int iCnt=0;
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
	 return TRUE;
 }	 
 else
 {
	 return FALSE;
 }
 */
 while(*str!='\0')
 {
	 if(*str==ch)
	 {
		 break;
	 }
	 str++;
 }
 if(*str!='\0')
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
	char arr[20],cValue;
	BOOL bRet=FALSE;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	printf("Eneter chracter to be search");
	scanf(" %c",&cValue);
	
	bRet=Check(arr,cValue);
    
	if(bRet==TRUE)
	{
		printf("Character is present\n");
	}
	else
	{
		printf("Character is not present\n");
	}
	return 0;
	
	
}