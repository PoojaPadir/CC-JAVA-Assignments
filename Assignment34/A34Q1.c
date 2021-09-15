//Write a program which displays all elements which are perfect from singly linear linked list.

//Input linked list: 11->28->17->41->6->89
//Output :6 28

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef NODE * PNODE;
typedef PNODE * PPNODE;

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
void DisplayPerfect(PNODE Head)
{
	
   while(Head!=NULL)
   {
	   int sum=0,i=0;
	
	   for(i=1;i<Head->Data;i++)
	   {
	     if(Head->Data%i==0)
	      {
		    sum=sum+i;
	      }
	   }
	   if(sum==Head->Data)
       {
	      printf("%d\t",Head->Data);
       }	
	   Head=Head->Next;
   }

}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	
	DisplayPerfect(First);
	
	return 0;
}