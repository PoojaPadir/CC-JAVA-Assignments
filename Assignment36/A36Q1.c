//Write a recursive program which dispaly below pattern
//Output: * * * * *

#include<stdio.h>
void Display()
{
	static int i=1;
	while(i<=5)
	{
		printf("*\t");
		i++;
		Display();
	}
}
int main()
{
	Display();
	return 0;
}