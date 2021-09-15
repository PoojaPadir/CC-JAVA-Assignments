//write a program which which accept two numbers from user and display position of common ON bits from that two numbers. 

//Input: 10  15  ( 1 0 1 0 )  
//               ( 1 1 1 1 )
//Output: 2  4


#include<stdio.h>
typedef unsigned int UINT;

void CommonBit(UINT iNo1,UINT iNo2)
{
	UINT iMask=0X00000001,Result=0;
	int i=0,iCnt=0;
	for(i=1;i<=32;i++)
	{
		Result=((iNo1 & iNo2) & (iMask));
		
		if(Result==iMask)
		{
			printf("%d\t",i);
		}
		
		iMask=iMask<<1;
	}
}
int main()
{
	UINT iValue1=0,iValue2=0;
	
	printf("Enter 1st number\n");
	scanf("%u",&iValue1);
	printf("Enter 2nd number\n");
	scanf("%u",&iValue2);
	
	CommonBit(iValue1,iValue2);
	return 0;
}