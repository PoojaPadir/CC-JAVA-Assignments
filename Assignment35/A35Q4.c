//Write a program which display smallest digits of all elements from singly linear linked list.

//Input linked list: 11->250->532->415
//Output :1 0 2 1

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
void Minimum(PNODE Head)
{
	while(Head!=NULL)
	{
		int min=0,digit=0;
		min=Head->Data%10;
		while(Head->Data>0)
		{
			digit=Head->Data%10;
			if(digit<min)
			{
				min=digit;
			}
			Head->Data=Head->Data/10;
		}
		printf("%d\t",min);
		Head=Head->Next;
	}
}

int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,415);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	
	Minimum(First);
	
	return 0;
}