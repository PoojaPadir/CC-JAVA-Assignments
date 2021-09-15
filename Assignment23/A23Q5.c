//write a program which accept string from user and display it in reverse order
//Input: "MarvellouS"
//Output: SoullevraM

#include<stdio.h>
void Reverse(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
	  iCnt++;
      str++;	  
	}
	str--;
	while(iCnt>0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
	
}
int main()
{
	char arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	Reverse(arr);

	return 0;
	
	
}