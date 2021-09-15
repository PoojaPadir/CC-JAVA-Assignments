//Write a program which returns second maximum element from singly linear linked list.

//Input linked list: 110->230->320->240
//Output :240

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
int SecondMax(PNODE Head)
{
	int Max1=0,Max2=0,Min=0;
	Max1=Max2=Min=Head->Data;
   while(Head!=NULL)
   {  
	    if(Head->Data<Min)
		{
			Min=Head->Data;	
		}
		else if(Head->Data>Max1)
		{
			Max2=Max1;
			Max1=Head->Data;
		}
		else if(Head->Data > Max2 && Head->Data < Max1)
        {
            Max2 = Head->Data;
		}
		Head=Head->Next;
   }
   return Max2;
}

int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,1);
	InsertFirst(&First,3);
	InsertFirst(&First,2);
	InsertFirst(&First,4);
	
	iRet=SecondMax(First);
	printf("Addition of even elements is : %d\n",iRet);
	
	return 0;
}