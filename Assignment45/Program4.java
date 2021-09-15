//Accept number from user and return multiplication of all digits.
//Input: 2395
//Output:270

//Input: 1018
//Output: 8

//Input: 9440
//Output: 144

//Input: 922432
//Output: 864


import java.util.*;

class Digit
{
	public int Multiply(int iNo)
	{
		int iMult=1;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			int iDigit=iNo%10;
			if(iDigit!=0)
			{
			  iMult=iMult*iDigit;
			}
			iNo=iNo/10;
		}
		return iMult;
	}
}

class Program4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number");
		int no=sobj.nextInt();
		
		Digit obj=new Digit();
		int iRet=obj.Multiply(no);
		
		System.out.println("Multiplication of all digits are: "+iRet);
		
	}
}