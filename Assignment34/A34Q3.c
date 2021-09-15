//Write a program which returns addition of all even elements from singly linear linked list.

//Input linked list: 11->20->32->41
//Output :52

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
int AddEven(PNODE Head)
{
	int sum=0;
   while(Head!=NULL)
   {  
	     if(Head->Data%2==0)
	      {
		    sum=sum+Head->Data;
		  }
	   
	   Head=Head->Next;
   }
   return sum;

}
int main()
{
	int iRet=0,iValue=0;
	PNODE First=NULL;
	
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	iRet=AddEven(First);
	printf("Addition of even elements is : %d\n",iRet);
	
	return 0;
}