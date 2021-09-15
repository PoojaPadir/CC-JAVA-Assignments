//Accept N numbers from user and accept one another number as iNo,return index of last occurance of that iNo

//Input: N  : 6
//       iNo: 66
//  Elements: 85 66 3 66 93 88
//    Output: 3

//Input:     6
// iNo :     12
// Elements: 85 66 3 15 12 98
//Output:    4

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
	int i=0;
	for(i=iLength-1;i>=0;i--)
	{
		if(Arr[i]==iNo)
		{
		   break;
		}
    }
  
	 return i;
  
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
	iRet=LastOcc(p,iSize,iValue);
	
	printf("%d\n",iRet);
	return 0;
}
