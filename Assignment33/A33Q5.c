//Write a program which returns smallest element from singly linear linked list.

//Input linked list: 110->230->20->240->640
//Output :20

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
    struct node * Next;
};

/* typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;*/

void InsertFirst(struct node **Head,int no)
{
	struct node *newn=NULL;
	newn=(struct node *)malloc(sizeof(NODE));
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
int Minimum(PNODE Head)
{
	int Min=0;
	Min=Head->Data;
   while(Head!=NULL)
   {
	   if(Head->Data<Min)
	   {
		   Min=Head->Data;
	   }
	   Head=Head->Next;
   }	   
   return Min;
}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,110);
	InsertFirst(&First,230);
	InsertFirst(&First,20);
	InsertFirst(&First,240);
	InsertFirst(&First,640);
	
	iRet=Minimum(First);
	printf("Smallest element is : %d\n",iRet);
	
	return 0;
}