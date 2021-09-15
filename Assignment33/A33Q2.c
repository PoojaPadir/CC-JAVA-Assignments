//Write a program which search last occurances of particular element from singly linear linked list.
//Function should return position at which element is found.

//Input linked list: 10->20->30->40->50->30->70
//Input element: 30
//Output : 6

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Next=NULL;
	newn->Data=no;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->Next=*Head;
		*Head=newn;
	}
}
int SearchLastOcc(PNODE Head,int no)
{
	int iCnt1=0,iCnt2=0;
   while(Head!=NULL)
   {
	   iCnt1++;
	   if(Head->Data==90)
	   {
		   iCnt2=iCnt1;
	   }
	   Head=Head->Next;
   }	   
   return iCnt2;
}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,90); 
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,90);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	
	iRet=SearchLastOcc(First,iValue);
	printf("Last Occurance is: %d\n",iRet);
	
	return 0;
}