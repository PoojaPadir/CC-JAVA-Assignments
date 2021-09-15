//Accept N numbers from user and display summation of digits of each number.
//Input: N  : 6
//  Elements: 8225 665 3 76 953 858
//    Output: 17 17 3 14 17 21


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int i=0,digit=0,iCnt,sum,temp=0;
	if(Arr==NULL)
	{
		return;
	}
	
	for(i=0;i<iLength;i++)
	{
		temp=Arr[i],sum=0;
		while(temp>0)
		{
			digit=temp%10;
			sum=sum+digit;
			
			temp=temp/10;
		}
		 printf("%d\t",sum);	
	}
}

int main()
{
	int iCnt=0,iSize=0;
	
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
	
	Display(p,iSize);
	
	free(p);
	
	return 0;
}