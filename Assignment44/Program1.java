//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

//Input: N: 6
//        Elements: 85 66 3 80 93 88
//Output: 53 (234-181)

import java.util.*;

class ArrayDemo
{
	public int Difference(int Arr[])
	{
		int eSum=0,oSum=0;
		for(int i=0;i<Arr.length;i++)
		{
			if(Arr[i]%2==0)
			{
				eSum=eSum+Arr[i];
			}
			else
			{
				oSum=oSum+Arr[i];
			}
		}
		return eSum-oSum;
	}
}

class Program1
{
	public static void main(String arg[])
	{
		int i=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of elements");
		int no=sobj.nextInt();
		
		int Arr[]=new int[no];
		
		System.out.println("Enetr elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
	    ArrayDemo obj=new ArrayDemo();
		int iRet=obj.Difference(Arr);
		System.out.println("Difference is: "+iRet);
		
	}
}

