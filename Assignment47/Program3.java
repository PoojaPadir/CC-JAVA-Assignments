//Accept number from user and return count of digits in between 3 and 7
//Input: 2395
//Output:1

//Input: 1018
//Output: 0

//Input: 4521
//Output: 2

//Input: 9922
//Output: 0


import java.util.*;

class Digit
{
	public int CountRange(int iNo)
	{
		if(iNo<0)
		{
			iNo=-iNo;
		}
		int iCnt=0;
		while(iNo!=0)
		{
			int iDigit=iNo%10;
			if((iDigit>3) && (iDigit<7))   //Digit=iNo%10;
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int no=sobj.nextInt();
		
		Digit obj=new Digit();
		int iRet=obj.CountRange(no);
		
		System.out.println("Count of digits between 3 and 7 are: "+iRet);
		
	}
}