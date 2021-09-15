//Write a program which accept matrix from user and swap the contents of consecutive rows
//Input:
//Number: 9
//     3 2 5 9             00 01 02 03
//     4 3 2 2             10 11 12 13  
//     8 4 1 9             20 21 22 23 
//     3 9 7 5             30 31 31 33 
       

//Output: 
////   4 3 2 2             00 01 02 03
//     3 2 5 9             10 11 12 13  
//     3 9 7 5             20 21 22 23 
//     8 4 1 9             30 31 31 33 


import java.util.*;
class Matrix
{
	public void SwapRows(int Arr[][],int iRow,int iCol)
	{
		for(int i=0;i<iRow-1;i+=2)
		{
			for(int j=0;j<iCol;j++)
			{
			 System.out.print(Arr[i+1][j]+"\t");
		    }
			System.out.println();
			for(int k=0;k<iCol;k++)
			{
			 System.out.print(Arr[i][k]+"\t");
		    }
			System.out.println();
		}
		
	}
}
class Program5
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
		System.out.println("After swapping rows: ");
		
	    obj.SwapRows(Arr,row,col);
		
	}
	
}