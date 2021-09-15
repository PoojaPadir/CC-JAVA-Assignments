//Accept N numbers from user and display such elements which are divisible by 5
// Input: N: 6

// Elements:85 66 3 80 93 88

// Output: 85 80


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int i=0;
    if(Arr==NULL)
	{
		return;
	}
	
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%5==0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}

int main()
{
	int *p=NULL;
	int iCnt=0,iSize=0;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unamble to allocate memeory\n");
		return -1;
	}
	printf("Enter %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	Display(p,iSize);
	
	free(p);
	
	return 0;
}