//Write a recursive program which dispaly below pattern
//Input: 6
//Output:A B C D E F
#include<stdio.h>
void Display(int iNo)
{
	static char ch='A';
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