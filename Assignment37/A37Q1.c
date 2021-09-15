//Write a recursive program which dispaly below pattern
//Input: 5
//Output:* * * * *
#include<stdio.h>
void Display(int iNo)
{
	static int i=1;
	while(i<=iNo)
	{
		printf("*\t",i);
		i++;
		Display(iNo);
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