//Write a recursive program which dispaly below pattern
//Output:a b c d e f
#include<stdio.h>
void Display()
{
	static char ch='a';
	while(ch<='f')
	{
		printf("%c\t",ch);
		ch++;
		Display();
	}
}
int main()
{
	Display();
	return 0;
}