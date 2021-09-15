//Accept N numbers from user and accept one another number as iNo,check whtetger iNo is present or not
//Input: N  : 6
//       iNo: 66
//  Elements: 85 66 3 66 93 88
//Output: TRUE

//Input:  6
// iNo :   12
// Elements: 85 66 3 15 11 98
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
		   break;
		}
    }
  if(i==iLength)
  {
	  return FALSE;
  }
  else
  {
	  return TRUE;
  }
}
int main()
{
	int iCnt,iSize,iValue=0;
	BOOL bRet=FALSE;
	int *p=NULL;
	
	printf("Enetr number of elements");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		return -1;
	}
	
	printf("Enetr %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	printf("Enetr number to search");
	scanf("%d",&iValue);
	bRet=Check(p,iSize,iValue);
	if(bRet==TRUE)
	{
		printf("Number is present\n");
	}
	else
	{
		printf("Number is not present\n");
	}
	return 0;
}
