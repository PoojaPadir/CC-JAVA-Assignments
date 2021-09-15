//Write a program which returns largest element from singly linear linked list.

//Input linked list: 110->230->320->240
//Output :320

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
int Maximum(PNODE Head)
{
	int Max=0;
	Max=Head->Data;
   while(Head!=NULL)
   {
	   if(Head->Data>Max)
	   {
		   Max=Head->Data;
	   }
	   Head=Head->Next;
   }	   
   return Max;
}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,-1);
	InsertFirst(&First,-1);
	InsertFirst(&First,-1);
	InsertFirst(&First,-1);
	
	
	iRet=Maximum(First);
	printf("Largest element is : %d\n",iRet);
	
	return 0;
}