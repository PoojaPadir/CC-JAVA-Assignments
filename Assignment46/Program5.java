//Accept N numbers from user and return product of all odd elements
//Input: N: 6
//Elements: 15 66 3 70 10 88
//Output: 45

import java.util.*;
class Number
{
	public int Product(int Arr[])
	{
		int Result=1;
		for(int i=0;i<Arr.length;i++)
		{
			if(Arr[i]%2!=0)
			{
				Result=Result*Arr[i];
			}
		}
		return Result;
	}
}

class Program5
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
		
		Number obj=new Number();
		int iRet=obj.Product(Arr);
		System.out.println("Product of all elements is: "+iRet);
	}
}
