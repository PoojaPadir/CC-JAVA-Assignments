//Write generic program to accept N values and search last occurance of any specific value

//Input: 10 20 30 10 30 40 10 40 10
//Value to check frequency: 40
//Output: 8
#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr,int iSize,T no)
{
	int i=0;
	for(i=iSize-1;i>=0;i--)
	{
		if(arr[i]==no)
		{
		   break;
		}
	}
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iRet=SearchLast(arr,9,40);
	printf("%d\n",iRet);
	
	return 0;
}