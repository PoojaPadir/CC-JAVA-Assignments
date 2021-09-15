//Accept number from user and return count of odd digits
//Input: 2395
//Output:3

//Input: 1018
//Output: 2

//Input: -1018
//Output: 2

//Input: 8462
//Output: 0


import java.util.*;

class Digit
{
	public int CountOdd(int iNo)
	{
		if(iNo<0)
		{
			iNo=-iNo;
		}
		int iCnt=0;
		while(iNo!=0)
		{
			if((iNo%10)%2!=0)   //Digit=iNo%10;
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int no=sobj.nextInt();
		
		Digit obj=new Digit();
		int iRet=obj.CountOdd(no);
		
		System.out.println("Count of Odd digits are: "+iRet);
		
	}
}