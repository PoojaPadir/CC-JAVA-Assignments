//Accept N numbers from user and return difference between frequency of even numbers and odd numbers
// Input: N: 7

// Elements:85 66 3 80 93 88 90

// Output: 1   (4-3)

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
	int i=0,evenCnt=0,oddCnt=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			evenCnt++;
		}
		else
		{
			oddCnt++;
		}
	}
	return evenCnt-oddCnt;
}
int main()
{
	int *p=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	printf("Enter number of elements");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Frequency(p,iSize);
	
	printf("Count is : %d\n",iRet);
	
	free(p);
	return 0;
}