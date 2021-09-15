//Write a program which display product of all digits of all elements from singly linear linked list.(don't consider 0).

//Input linked list: 11->20->32->41
//Output :1 2 6 4

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
void Product(PNODE Head)
{
	
   while(Head!=NULL)
   {  
    int digit=0,sum=0,reverse=0,mult=1;
	while(Head->Data>0)
	{
		digit=Head->Data%10;
		if(digit!=0)
		{
		  mult=mult*digit;
		}
		Head->Data=Head->Data/10;
	}
	
	printf("%d\t",mult);
	
    Head=Head->Next;
   }
}

int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	Product(First);
	
	return 0;
}