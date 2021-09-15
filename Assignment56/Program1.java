//Write a java program which aacpet string from user and display below pattern
//Input: Hello
//Output:
// H * * * *
// H e * * *
// H e l * *
// H e l l *


import java.util.*;
class Pattern
{
	public void Pattern(String str)
	{
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length-1;i++)
		{
		  for(int j=0;j<=i;j++)
		  {
			System.out.print(arr[j]+"\t");
		  }
		  
		  for(int k=arr.length-(i+1);k>0;k--)
		  {
		    System.out.print("*\t");
		  }
		  System.out.println();
	    }
	}
}
class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
		Pattern obj=new Pattern();
		
		obj.Pattern(str);
	}
}