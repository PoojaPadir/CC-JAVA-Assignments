// Write generic program to find largest number from three numbers
#include<iostream>
using namespace std; 
template<class T>
T Max(T iNo1,T iNo2,T iNo3)
{
	T iMax=0;
	if(iNo1>iNo2 && iNo1>iNo3)
	{
		iMax=iNo1;
	}
	else if(iNo2>iNo1 && iNo2>iNo3)
	{
		iMax=iNo2;
	}
	else
	{
		iMax=iNo3;
	}
	return iMax;
		
}
int main()
{
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;
	
	cout<<"Enter 3 numbers\n";
	cin>>iValue1>>iValue2>>iValue3;
	
	iRet=Max(iValue1,iValue2,iValue3);
	
	cout<<"The largest number is: "<<iRet;
	
	return 0;
}
