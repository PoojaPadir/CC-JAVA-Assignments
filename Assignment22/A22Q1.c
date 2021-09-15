//Write a program which displays ASCII table.Table contains symbol,Decimal,hexadecimal and octal representation of every memeber from 0 to 255

#include<stdio.h>
void DisplayASCII()
{
	int i;
	for(i=0;i<255;i++)
	{
		printf("%c\t%d\t%o\t%x\n",i,i,i,i);
	}

}
int main()
{
	DisplayASCII();
	return 0;
}