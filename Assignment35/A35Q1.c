//Write a program which reverse each element from singly linear linked list.

//Input linked list: 11->28->17->41->6->89
//Output :11 82 71 14 6 98

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
void Reverse(PNODE Head)
{
   while(Head!=NULL)
   {  
    int digit=0,sum=0,reverse=0;
	while(Head->Data>0)
	{
		digit=Head->Data%10;
		reverse=reverse*10+digit;
		Head->Data=Head->Data/10;
	}
	printf("%d\t",reverse);
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
	
	Reverse(First);
	
	return 0;
}