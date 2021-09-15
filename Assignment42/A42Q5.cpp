//Write generic program to accept N values and search last occurance of any specific value

//Input: 10 20 30 10 30 40 10 40 10
//Value to check frequency: 40
//Output: 8
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,int iSize)
{
	for(int i=iSize-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	Reverse(arr,9);
	
	return 0;
}