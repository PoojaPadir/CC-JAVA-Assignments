//Write a java program which aacpet string from user and display below pattern
//Input: Hello
//Output:

// H e l l o
// H e l l o
// H e l l o
// H e l l o

import java.util.*;
class Pattern
{
	public void Pattern(String str)
	{
		char arr[]=str.toCharArray();
		for(int j=1;j<arr.length;j++)
		{
		  for(int i=0;i<arr.length;i++)
		  {
		 	System.out.print(arr[i]+"\t");
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