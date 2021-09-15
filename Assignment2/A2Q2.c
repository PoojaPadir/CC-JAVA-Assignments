//Accept one number from user and print thta number of * on screen

#include<stdio.h>
void Display(int iNo)
{
	while(iNo>=1)
	{
		printf("*\n");
		iNo--;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}