//Write a java program which accept string from user and count number of small characters
//Input: "Marvellous"
//Output: 9

import java.util.*;

class StringX
{
	public int Count(String str)
	{
		int iCnt=0;
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Program2
{
	public static void main(String arg[])
	{
		int iRet=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter string");
		String str=sobj.nextLine();
		
		StringX obj=new StringX();
		iRet=obj.Count(str);
		
		System.out.println("Number of small letters are: "+iRet);
	}
}