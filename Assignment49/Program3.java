//Write a java program which accept 2 strings from user and check whether first N contents of two strings are equla or not
//NOTE: If third parametr is greater than the size of second stirng then concat whole string after first string

//Input: "Marvellous Infosystems"
//       "Marvellous Logic Building"
//       10
//Output: TRUE

import java.util.*;
class StringDemo
{
	public boolean StrNCmpX(String src,String dest,int iCnt)
	{
		int t=0;
		src=src+" ";
		char arr[]=src.toCharArray();
		char brr[]=dest.toCharArray();
		for(int i=0;i < iCnt;i++)
		{
			if(iCnt > brr.length)
			{
				src=src+dest;
				System.out.println(src);
				break;
			}
			else
			{
			  if(arr[i]==brr[i])
			  {
				  t++;
			  }
			}
		}
		if(t==iCnt)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enetr 1st string");
		String str1=sobj.nextLine();
		System.out.println("Enetr 2nd string");
		String str2=sobj.nextLine();
		System.out.println("Enetr how many number of characters compare");
		int no=sobj.nextInt();
		
		StringDemo obj=new StringDemo();
		
		boolean bret=obj.StrNCmpX(str1,str2,no);
		
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