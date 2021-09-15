//Accept N numbers from user and accept one another number as iNo,return index of first occurance of that iNo

//Input: N  : 6
//       iNo: 66
//  Elements: 85 66 3 66 93 88
//    Output: 1

//Input:     6
// iNo :     12
// Elements: 85 66 3 15 11 98
//Output:    -1

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
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
	  return -1;
  }
  else
  {
	  return i;
  }
}
int main()
{
	int iCnt,iSize,iValue=0;
	int iRet=0;
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
	iRet=FirstOcc(p,iSize,iValue);
	
	printf("%d\n",iRet);
	return 0;
}
