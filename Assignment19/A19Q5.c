//Accept N numbers from user return the product of all odd elements

//Input: N  : 6
//  Elements: 15 66 3 70 10 88
//    Output: 45

// Input:      6
// Elements:   44 66 72 70 10 88
// Output:     0

#include<stdio.h>
#include<stdlib.h>

int MultOdd(int Arr[],int iLength)
{
	int i=0,mult=1,cnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2!=0)
		{
		   mult=mult*Arr[i];
		   cnt++;
		}
	
    }
	if(cnt==0)
	{
		return cnt;
	}		
	else
	{
		return mult;
	}
}
int main()
{
	int iCnt,iSize;
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
	
	iRet=MultOdd(p,iSize);
	printf("%d\n",iRet);
	
	return 0;
}
