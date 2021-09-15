//Write a java program which accept string from user and return difference between frequency of small characters ang frequency of capital characters

//Input: "MarvellouS"
//Output: 6 (8-2)

import java.util.*;

class StringX
{
	public int CountDiff(String str)
	{
		int small=0,Cap=0;
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				Cap++;
			}
			else if((arr[i]>='a') && (arr[i]<='z'))
			{
				small++;
			}
		}
		return small-Cap;
	}
}

class Program3
{
	public static void main(String arg[])
	{
		int iRet=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
	    StringX obj=new StringX();
		iRet=obj.CountDiff(str);
		
		System.out.println("Diffrence is :"+iRet);
		
	}
}