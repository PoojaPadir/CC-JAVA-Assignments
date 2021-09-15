//Accept N numbers from user and accept one another number as iNo,return frequency of iNo from it
//Input:  6
// iNo:  66
// Elements: 85 66 3 66 93 88
//Output: 2

//Input:  6
//iNo : 12
// Elements: 85 66 3 15 11 98
//Output: 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int i=0,iCnt=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iCnt=0,iSize=0,iValue=0,iRet=0;
	int *p=NULL;
	
	printf("Enter number of elements");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter the number u want to search");
	scanf("%d",&iValue);
	
	iRet=Frequency(p,iSize,iValue);
	
	printf("Frequency is :%d\n",iRet);
	
	free(p);
	return 0;
}
