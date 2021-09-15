//Accept N numbers from user and display all such numbers which contains 3 digits in it.
//Input: N  : 6
//  Elements: 8225 665 3 76 953 858
//    Output: 665 953 858


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int i=0,digit=0,iCnt,temp=0;
	if(Arr==NULL)
	{
		return;
	}
	
	for(i=0;i<iLength;i++)
	{
		temp=Arr[i];
		iCnt=0;
		while(temp>0)
		{
			digit=temp%10;
			iCnt++;
			temp=temp/10;
		}
		if(iCnt==3)
		{
			printf("%d\t",Arr[i]);
		}
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