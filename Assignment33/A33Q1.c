//Write a program which search first occurances of particular element from singly linear linked list.
//Function should return position at which element is found.

//Input linked list: 10->20->30->40->50->30->70
//Input element: 30
//Output : 3
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
	newn->Data=no;
	newn->Next=NULL;
	
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
int SearchFirstOcc(PNODE Head,int no)
{
	int iCnt=0;
   while(Head!=NULL)
   {
	   iCnt++;
	   if(Head->Data==30)
	   {
		   break;
	   }
	   Head=Head->Next;
   }	   
   return iCnt;
}


int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,70); 
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	
	iRet=SearchFirstOcc(First,iValue);
	printf("First Occurance is : %d\n",iRet);
	
	return 0;
}