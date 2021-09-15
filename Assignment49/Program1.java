//Write a java program which accept 2 strings from user and concat N characters of second string after first string. Value of N should be accepted from user
//NOTE: If third parametr is greater than the size of second stirng then concat whole string after first string

//Input: "Marvellous Infosystems"
//       "Logic Building"
//       5
//Output: "Marvellous Infosystems Logic"

import java.util.*;
class StringDemo
{
	public String StrNCatX(String src,String dest,int iCnt)
	{
		src=src+" ";
		char brr[]=dest.toCharArray();
		for(int i=0;i < iCnt;i++)
		{
			if(iCnt > brr.length)
			{
				src=src+dest;
				break;
			}
			else
			{
			  src=src+brr[i];
			}
		}
		return src;
	}
}
class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enetr 1st string");
		String str1=sobj.nextLine();
		System.out.println("Enetr 2nd string");
		String str2=sobj.nextLine();
		System.out.println("Enetr how many characters concat");
		int no=sobj.nextInt();
		
		StringDemo obj=new StringDemo();
		
		String ret=obj.StrNCatX(str1,str2,no);
		
		System.out.println(ret);
	}
}