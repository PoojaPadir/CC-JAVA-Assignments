//Write a program which displays all elements which are prime from singly linear linked list.

//Input linked list: 11->20->17->41->22->89
//Output :11 17 41 89

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
void DisplayPrime(PNODE Head)
{
	
   while(Head!=NULL)
   {
	  int i=0;
	
	   for(i=2;i<=(Head->Data)/2;i++)
	   {
	     if(Head->Data%i==0)
	      {
		    break;
	      }
	   }
	   if(i==((Head->Data/2)+1))
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
	InsertFirst(&First,22);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	DisplayPrime(First);
	
	return 0;
}