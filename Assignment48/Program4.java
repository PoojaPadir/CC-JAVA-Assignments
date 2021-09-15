//Accept N numbers from user and accept range,display all elements from that range

//Input: N: 6
//Start: 60
//End: 90
//Elements: 85 66 3 76 93 88
//Output: 66 76 88

import java.util.*;
class Number
{
	public void Display(int Arr[],int iFirst,int iEnd)
	{
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>=iFirst) && (Arr[i]<=iEnd))
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter how many elements");
		int iSize=sobj.nextInt();
		int Arr[]=new int[iSize];
		System.out.println("Enetr elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enetr start");
		int iValue1=sobj.nextInt();
		System.out.println("Enetr end");
		int iValue2=sobj.nextInt();
		
		Number obj=new Number();
		obj.Display(Arr,iValue1,iValue2);
	}
}
