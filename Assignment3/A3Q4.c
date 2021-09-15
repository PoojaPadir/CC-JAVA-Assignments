//Accept one character from user and convert case of that character
// Input: a  Output: A
// Input: D  Output: d

#include<stdio.h>
void DisplayConvert(char Cvalue)
{
	//if(Cvalue<97)
	if(Cvalue>='a')
	{
		printf("%c",Cvalue-32);
	}
	//else if(Cvalue>65)
	else 
		//if(Cvalue>='A')
	{
		printf("%c",Cvalue+32);
	}
}

int main()
{
	char cValue='\0';
	printf("Enetr character\n");
	scanf("%c",&cValue);
	DisplayConvert(cValue);
}
