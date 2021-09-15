//Accept string from user and check whether the string is pallindrome or not without considering its case
//Input: "1abccBA1"
//Output: TRUE

import java.util.*;
class StringDemo
{
	public boolean StrPallindrome(String str)
	{
		String rev="";
		char arr[]=str.toCharArray();
		for(int i=arr.length-1;i>=0;i--)
        {
			rev=rev+arr[i];
		}
		if(str.equalsIgnoreCase(rev))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enetr string");
		String str1=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		
		boolean bret=obj.StrPallindrome(str1);
		
		if(bret==true)
		{
			System.out.println("String is pallindrome");
		}
		else
		{
			System.out.println("Stringis not pallindrome");
		}
	}
}