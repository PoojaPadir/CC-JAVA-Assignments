//Write a recursive program which dispaly below pattern
//Output: 1 2 3 4 5
#include<stdio.h>
void Display()
{
	static int i=1;
	while(i<=5)
	{
		printf("%d\t",i);
		i++;
		Display();
	}
}
int main()
{
	Display();
	return 0;
}