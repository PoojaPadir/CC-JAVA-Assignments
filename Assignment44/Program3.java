//Accept N numners from user and display all such numbers which are even and divisible by 5
//Input: N: 6
//      Elements: 85 66 3 80 93 88
//Output:  80

import java.util.*;

class ArrayDemo
{
	public void Display(int Arr[])
	{
		System.out.println("Numbers divisible by 5and even are: ");
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2==0) && (Arr[i]%5==0))
			{
				System.out.print(Arr[i]+"\t");
			}
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
		
		ArrayDemo obj=new ArrayDemo();
		obj.Display(Arr);
		
	}
}