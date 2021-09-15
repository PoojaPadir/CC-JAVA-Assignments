//Accept N numbers from user and return frequency of even numbers
// Input: N: 6

// Elements:85 66 3 80 93 88

// Output: 3

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
	int i=0,iCnt=0;
	printf("Count of even numbers\n");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *p=NULL;                                               
	int iCnt=0,iSize=0,iRet=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
   if(p==NULL)
   {
	   printf("Unable to allocate the memeory\n");
	   return -1;
   }
   
   printf("Enter %d elements ",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
	   scanf("%d",&p[iCnt]);
   }
   iRet=CountEven(p,iSize);
   printf("Count is : %d",iRet);
   
   free(p);
   
   return 0;
}