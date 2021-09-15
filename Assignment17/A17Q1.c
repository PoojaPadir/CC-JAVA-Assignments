//Accept N numbers from user and return difference between summation of even elements and summation of odd //elements
// Input: N: 6

// Elements:66 3 80 93 88

// Output: 53 (234-181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
	int i=0,iEven=0,iOdd=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			iEven=iEven+Arr[i];
		}
		else
		{
			iOdd=iOdd+Arr[i];
		}
	}
	return iEven-iOdd;
}

int main()
{
	int *p=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	printf("Enter number of elememts");
	scanf("%d",&iSize);
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memmory\n");
		return -1;
	}
	printf("Enter %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p,iSize);
	printf("Result is %d",iRet);
	free(p);
	return 0;
}
