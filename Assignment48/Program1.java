//Accept N numbers from user and accept one another number as NO ,check whether NO is present or not
//Input: N:  6
//       NO: 66
//       Elements: 85 66 3 66 93 88
//OutPut: TRUE

//Input: N:  6
//       NO: 12
//       Elements: 85 11 3 15 11 111
//OutPut: FALSE

import java.util.*;

class Number
{
	public boolean Check(int Arr[],int iNo)
	{
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i==Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter how many numbers");
		int no=sobj.nextInt();
		
		int Arr[]=new int[no];
		
		System.out.println("Enetr elements");
		for(int i=0;i<no;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enter the number to be search");
		int iValue=sobj.nextInt();
		
		Number obj=new Number();
		boolean bRet=obj.Check(Arr,iValue);
		if(bRet==true)
		{
			System.out.println(iValue+" is present");
		}
		else
		{
			System.out.println(iValue +" is not present");
		}
		
	}
}