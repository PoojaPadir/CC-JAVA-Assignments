//Accept N numbers from user return the largest number.
//Input: N  : 6
//  Elements: 85 66 3 66 93 88
//    Output: 93


#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
	int i=0,max=0;
	if(Arr==NULL)
	{
		return -1;
	}
	max=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>max)
		{
			max=Arr[i];
		}
	}
	return max;
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
	
	iRet=Maximum(p,iSize);
	
	printf("Largest number is : %d\n",iRet);
	
	free(p);
	
	return 0;
}