//Accept N numners from user and display all such numbers which are multiples of 11
//Input: N: 6
//      Elements: 85 66 3 55 93 88
//Output:  66 55 88

import java.util.*;

class ArrayDemo
{
	public void Display(int Arr[])
	{
		System.out.println("Numbers multiples of 11 are: ");
		for(int i=0;i<Arr.length;i++)
		{
			if(Arr[i]%11==0)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
	}
}

class Program5
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
		
		ArrayDemo obj=new ArrayDemo();
		obj.Display(Arr);
		
	}
}