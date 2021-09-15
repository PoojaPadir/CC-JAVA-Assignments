//Complete below code snippet by writting definations of below functions
//1. SearchLast()-> Search last occurance of number
//2. EvenCount() -> Count even elements
//3. OddCount() -> Count odd elements
//4. SumAll() -> sum of all elements

#include<iostream>
using namespace std;

class Array
{
	protected:
	      int *Arr;
		  int size;
	public:
	     Array(int value=10)
		 {
			 cout<<"Inside contructor\n";
			 this->size=value;
			 this->Arr=new int[size];
		 }
		 
		 Array(Array &ref)
		 {
			 cout<<"Inside copy constrctor\n";
			 this->size=ref.size;
			 this->Arr=new int[this->size];
			 
			 for(int i=0;i<size;i++)
			 {
				 this->Arr[i]=ref.Arr[i];
			 }
		 }
		 
		 ~Array()
		 {
			 cout<<"Inside destructor\n";
			 delete []Arr;
		 }
		 
		 inline void Accept();
		 inline void Display();

};

void Array::Accept()
{
	cout<<"Please eneter the values\n";
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
}
void Array::Display()
{
	cout<<"Elements are: \n";
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
	cout<<"\n";
}

class ArrSearch : public Array
{
	public:
	    ArrSearch(int no=10): Array(no)
		{
			
		}
		int Frequency(int);
		int SearchFirst(int);
		int SearchLast(int);
		int EvenCount();
		int OddCount();
};

int ArrSearch::SearchFirst(int value)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(i==size)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}

int ArrSearch::Frequency(int value)
{
	int iCnt=0;
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int ArrSearch::SearchLast(int value)
{
	int i=0;
	for(i=size-1;i>=0;i--)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(i==-1)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}

int ArrSearch::EvenCount()
{
	int i=0,eCnt=0;
	for(i=0;i<size;i++)
	{
		if(Arr[i]%2==0)
		{
			eCnt++;
		}
	}
	return eCnt;
}

int ArrSearch::OddCount()
{
	int i=0,oCnt=0;
	for(i=0;i<size;i++)
	{
		if(Arr[i]%2!=0)
		{
			oCnt++;
		}
	}
	return oCnt;
}

int main()
{
	cout<<"Inside main\n";
	
	ArrSearch sobj1(5);
	sobj1.Accept();
	sobj1.Display();
	
	int iRet=sobj1.Frequency(11);
	cout<<"Frequency is: "<<iRet<<"\n";
	
	iRet=sobj1.SearchFirst(11);
	cout<<"First occurance is: "<<iRet<<"\n";
	
	iRet=sobj1.SearchLast(20);
	cout<<"Last occuarnec is: "<<iRet<<"\n";
	
	iRet=sobj1.EvenCount();
	cout<<"Number of even elements are: "<<iRet<<"\n";
	
	
	iRet=sobj1.OddCount();
	cout<<"Number of odd elements are: "<<iRet<<"\n";
	
	return 0;
}