//Write a recursive program which dispaly below pattern
//Input: 6
//Output:a b c d e f 
#include<stdio.h>
void Display(int iNo)
{
	static char ch='a';
	static int i=1;
	while(i<=iNo)
	{
		printf("%c\t",ch);
		ch++;
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