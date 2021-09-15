//Accept string from user and reverse the contents of that string by toggling the case
//Input: "aCBdef"
//Output: "FEDbcA"

import java.util.*;
class StringDemo
{
	public String StrRevTogX(String str)
	{
		String str1="";
		char arr[]=str.toCharArray();
		for(int i=arr.length-1;i>=0;i--)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				arr[i]=(char)((int)arr[i]-32);
			}
			else if((arr[i]>='A') && (arr[i]<='Z'))
			{
				arr[i]=(char)((int)arr[i]+32);
			}
			str1=str1+arr[i];
		}
		return str1;
	}
}
class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enetr string");
		String str1=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		
		String ret=obj.StrRevTogX(str1);
		
		System.out.println(ret);
	}
}