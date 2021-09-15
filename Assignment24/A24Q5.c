//write a program which accept string from user and display only digits from that string.
//Input: "Marvellous"
//Output: 0

//Input: "Marvellous Infosystems"
//Output: 1

#include<stdio.h>
int Count(char *str)
{
	int iCnt=0;
   while(*str!='\0')
   {
	   if(*str==' ')
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
	
	iRet=Count(arr);
    printf("%d\n",iRet);
	return 0;
	
	
}