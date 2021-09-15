//Accept string from user and display it in reverse order

//Input:  "Marvellous"
//Output: "suollevraM"

import java.util.*;

class StringX
{
	public void Reverse(String str)
	{
		String reverse="";
		char arr[]=str.toCharArray();
		for(int i=(arr.length)-1;i>=0;i--)
		{
	    	reverse=reverse+arr[i];
		}
		System.out.println("Reverse string is: "+reverse);
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
	    StringX obj=new StringX();
		obj.Reverse(str);
	}
}

