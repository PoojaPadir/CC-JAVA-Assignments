//Write a program which display addition of digits of element from singly linear linked list.

//Input linked list: 110->230->20->240->640
//Output :2  5  2  6  10

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
void AddDigit(PNODE Head)
{
   while(Head!=NULL)
   {  
    int digit=0,sum=0;
	while(Head->Data>0)
	{
		digit=Head->Data%10;
		sum=sum+digit;
		Head->Data=Head->Data/10;
	}
	printf("%d\t",sum);
    Head=Head->Next;
   }
}

int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
    InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	AddDigit(First);
	
	return 0;
}