//Accept N numbers from user return the smallest number.
//Input: N  : 6
//  Elements: 85 66 3 66 93 88
//    Output: 3


#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
	int i=0,min=0;
	if(Arr==NULL)
	{
		return -1;
	}
	min=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<min)
		{
			min=Arr[i];
		}
	}
	return min;
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
	
	printf("Enter %d numbers",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Minimum(p,iSize);
	
	printf("smallest number is : %d\n",iRet);
	
	free(p);
	
	return 0;
}