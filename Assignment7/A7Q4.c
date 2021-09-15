//Write a program which accept number from user and return multiplication of all digit 

//Input: 2395
//Output: 270

//Input: 1018
//Output:8
   
//Input: 9440
//Output: 144

//Input:922432
//Output: 864

#include<stdio.h>

int MultDigits(int iNo)
{
	int mult=1,digit;
	
	while(iNo>0)
	{
		digit=iNo%10;
		if(digit==0)
		{
			//break;
		}
		else
		{
		    mult=mult*digit;
		}
		iNo=iNo/10;
	}
	return mult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
