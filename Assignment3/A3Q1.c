//Q1-> Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>
void PrintEven(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		return;
	}
	for(i=1;i<=iNo*2;i++)
	{
		if(i%2==0)
		  printf("%d\t",i);
	}
}

int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}
