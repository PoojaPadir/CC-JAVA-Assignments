//Write a java program which accept string from user and count number of capital characters
//Input: "Marvellous Multi OS"
//Output: 4

import java.util.*;

class StringX
{
	public int Count(String str)
	{
		int iCnt=0;
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Program1
{
	public static void main(String arg[])
	{
		int iRet=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
		StringX obj=new StringX();
		iRet=obj.Count(str);
		
		System.out.println("Number of capital letters are: "+iRet);
	}
}