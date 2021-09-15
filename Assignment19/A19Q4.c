//Accept N numbers from user and accept range,Display all the elements from that range.

//Input: N  : 6
//     Start: 60
//     End:   90
//  Elements: 85 66 3 76 93 88
//    Output: 66 76 88

//Input:     6
//     Start: 30
//     End:   50
//  Elements: 85 66 3 76 93 88
//    Output: 

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>iStart && Arr[i]<iEnd)
		{
		   printf("%d\n",Arr[i]);
		}
    }
  
	 
  
}
int main()
{
	int iCnt,iSize,iValue1=0,iValue2=0;
	
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
	printf("Enetr starting point");
	scanf("%d",&iValue1);
	printf("Enetr ending point");
	scanf("%d",&iValue2);
	
	Range(p,iSize,iValue1,iValue2);
	
	return 0;
}
