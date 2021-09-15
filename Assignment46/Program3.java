//Accept N numbers from user and accept one another number as NO,return index of last occurance of that NO
//Input: N:  6
//       NO: 66
//       Elements: 85 66 3 66 93 88
//OutPut: 3

//Input: N:  6
//       NO: 93
//       Elements: 85 66 3 66 93 88
//OutPut: 4

//Input: N:  6
//       NO: 12
//       Elements: 85 11 3 15 11 111
//OutPut: -1

import java.util.*;

class Number
{
	public int LastOcc(int Arr[],int iNo)
	{
		int i=0;
		for(i=Arr.length-1;i>=0;i--)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i==Arr.length)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
}

class Program3
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
		int iRet=obj.LastOcc(Arr,iValue);
		
		System.out.println("Index of Last occurance of number is: "+iRet);
		
		
	}
}