//Accept N numbers from user and return frequency of 11 from it
//Input:  6
// Elements: 85 66 3 15 93 88
//Output: 0

//Input:  6
// Elements: 85 11 3 15 11 111
//Output: 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int i=0,iCnt=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}
	return iCnt;
	
	
}
int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p=NULL;
	
	printf("Enter number of elements");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize*sizeof(int));
	
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
	
	printf("%d\n",iRet);
	
	free(p);
	
	return 0;
}