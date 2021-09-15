//Accept number from user and return difference between summation of even digits and summation of odd digits
//Input: 2395
//Output:-15 (2-17)

//Input: 1018
//Output: 6 (8-2)

//Input: 8440
//Output: 16 (16-0)

//Input: 5733
//Output: -18 (0-18)


import java.util.*;

class Digit
{
	public int Diff(int iNo)
	{
		int eSum=0,oSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			int iDigit=iNo%10;
			if(iDigit%2==0)
			{
				eSum=eSum+iDigit;
			}
			else
			{
				oSum=oSum+iDigit;
			}
			iNo=iNo/10;
		}
		return eSum-oSum;
	}
}

class Program5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int no=sobj.nextInt();
		
		Digit obj=new Digit();
		int iRet=obj.Diff(no);
		
		System.out.println("Difference is: "+iRet);
		
	}
}