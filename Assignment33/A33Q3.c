//Write a program which returns addition of all elements from singly linear linked list.

//Input linked list: 10->20->30->40
//Output : 100

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
int Addition(PNODE Head)
{
	int sum=0;
   while(Head!=NULL)
   {
	   sum=sum+Head->Data;
	   Head=Head->Next;
   }	   
   return sum;
}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	
	iRet=Addition(First);
	printf("Addition is : %d\n",iRet);
	
	return 0;
}