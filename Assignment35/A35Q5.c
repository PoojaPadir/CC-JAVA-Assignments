//Write a program which display smallest digits of all elements from singly linear linked list.

//Input linked list: 11->250->532->419
//Output :1 5 5 9

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
void Maximum(PNODE Head)
{
	while(Head!=NULL)
	{
		int max=0,digit=0;
		max=Head->Data%10;
		while(Head->Data>0)
		{
			digit=Head->Data%10;
			if(digit>max)
			{
				max=digit;
			}
			Head->Data=Head->Data/10;
		}
		printf("%d\t",max);
		Head=Head->Next;
	}
}

int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,419);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	
	Maximum(First);
	
	return 0;
}