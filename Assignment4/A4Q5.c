//write a program which accept number from user and return difference between summation of all its factors and non factors

//Input: 12
//Output: -34  (16-50)

//Input: 10
//Output: -29  (8-37)

#include<stdio.h>
int FactDiff(int iNo)
{
	int i=0,sumFact=0,sumNonFact=0;
	
	for(i=1;i<=iNo/2;i++)
	{
		if(iNo%i==0)
          sumFact=sumFact+i;
       		
	}
	
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i!=0)
          sumNonFact=sumNonFact+i;			
	}
	return sumFact-sumNonFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}