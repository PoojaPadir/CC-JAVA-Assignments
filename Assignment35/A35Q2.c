//Write a program which display all pallindrome elements from singly linear linked list.

//Input linked list: 11->28->17->414->6->89
//Output :11 6 414 

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
void Pallindrome(PNODE Head)
{
	
   while(Head!=NULL)
   {  
    int temp=Head->Data;
    int digit=0,sum=0,reverse=0;
	while(temp>0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
	}
	if(reverse==Head->Data)
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
	InsertFirst(&First,414);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	
	Pallindrome(First);
	
	return 0;
}