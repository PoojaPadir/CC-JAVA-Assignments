//Accept character from user.If it is capital then display all the chracaters from the input characters till Z.If input chracater is small then print all the chracaters in reverse order ill a.In other cases return directly. 

//Input: Q
//Output: Q R S T U V W X Y Z

//Input: m
//Output: m l k j i h g f e d c b a

//Input: 8                  
//Output:                  

#include<stdio.h>
void Display(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		while(ch<='Z')
		{
			printf("%c\t",ch);
			ch++;
		}
	}
	
	if(ch>='a' && ch<='z')
	{
		while(ch>='a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
	else
	{
		return;
	}
} 
int main()
{
	char cValue='\0';
	
	printf("Enter chracter\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}