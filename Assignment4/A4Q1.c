//Accept a program whic accept number from user and display its multiplication of factors

// Input:   13
//Output:   144  (1*2*3*4*6)

//Input: 13
//Output: 1      (1)

//Input: 10
//Output: 10     (1*2*5)

#include<stdio.h>

int MultFact(int iNo)
{
	int mult=1,i=0;
	
	for(i=1;i<=iNo/2;i++)
	{
		if(iNo%i==0)
		{
		 mult=mult*i;
		}
	}
	return mult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultFact(iValue);
	
	printf("%d",iRet);
	return 0;
}