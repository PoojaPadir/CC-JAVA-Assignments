//Accept string from user and reverse that string in place
//Input: "abcd"
//Output: "dcba"

//Input: "abba"
//Output: "abba"

#include<stdio.h>
void strRev(char *str)
{
	char *start;
	char *end;
	char temp;
	
	if(str==NULL)
	{
		return;
	}
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
		
	}
	end--;
	while(start<end)
	{
		temp=*end;
		*end=*start;
		*start=temp;
		end--;
		start++;
		
	}
}
int main()
{
	char arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	strRev(arr);
	
	printf("Modified string is : %s\n",arr);
	return 0;
}