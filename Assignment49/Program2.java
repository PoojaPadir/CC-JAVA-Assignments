//Write a java program which accept 2 strings from user and check whether contents of two strings are equal or not

//Input: "Marvellous Infosystems"
//       "Marvellous Infosystems"
//Output: TRUE

import java.util.*;
class StringDemo
{
	public boolean StrCmpX(String src,String dest)
	{
		int iCnt=0;
		if(src.length() != dest.length())
		{
			return false;
		}
		char Arr[]=src.toCharArray();
		char Brr[]=dest.toCharArray();
		for(int i=0;i<Arr.length;i++)
		{                                               
			if(Arr[i]==Brr[i])                         
 			{
				iCnt++;           
			}
		}
		if(iCnt==Arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enetr 1st string");
		String str1=sobj.nextLine();
		System.out.println("Enetr 2nd string");
		String str2=sobj.nextLine();
		
		StringDemo obj=new StringDemo();
		
		boolean bret=obj.StrCmpX(str1,str2);
		
		if(bret==true)
		{
			System.out.println("Strings are equal");
		}
		else
		{
			System.out.println("Strings are not equal");
		}
	}
}