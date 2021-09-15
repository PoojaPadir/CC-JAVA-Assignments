//Write a program which accept matrix from user and return addition of diagonal elements
//Input:
//Number: 9
//   3 2 5 9
//   4 3 2 2
//   8 4 1 9
//   3 9 7 5

//Output: 3


import java.util.*;
class Matrix
{
	public int Freq(int Arr[][],int iRow,int iCol,int iNo)
	{
		int iCnt=0;
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
			 if(Arr[i][j]==iNo)
			 {
				 iCnt++;
			 }
		    }
		}
		return iCnt;
	}
}
class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of coulmns");
		int col=sobj.nextInt();
		
		int Arr[][]=new int[row][col];
		System.out.println("Enter elements");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
			  Arr[i][j]=sobj.nextInt();
		    }
		}
		System.out.println("Enter the number to be count frequency");
		int no=sobj.nextInt();
		System.out.println("Entered values in matrix form");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
			  System.out.print(Arr[i][j]+"\t");
		    }
			System.out.println();
		}
		
		Matrix obj=new Matrix();
		int ret=obj.Freq(Arr,row,col,no);
		System.out.println("Frequency of "+no+" is :"+ret);
	}
	
}