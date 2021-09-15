//Accept number from user and return count of even digits
//Input: 2395
//Output: 1

//Input: 1018
//Output: 2

//Input: -1018
//Output: 2


import java.util.*;

class Digit
{
	public int CountEven(int iNo)
	{
		if(iNo<0)
		{
			iNo=-iNo;
		}
		int iCnt=0;
		while(iNo!=0)
		{
			if((iNo%10)%2==0)   //Digit=iNo%10;
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}

class Program1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int no=sobj.nextInt();
		
		Digit obj=new Digit();
		int iRet=obj.CountEven(no);
		
		System.out.println("Count of Even digits are: "+iRet);
		
	}
}