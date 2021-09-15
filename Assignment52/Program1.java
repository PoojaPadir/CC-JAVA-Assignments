//Write a program which accept matrix from user and display transpose of matrix
//The transpose of given matrix is formed by interchanging the rows and columns of given matrix
//Input:
//Number: 9
//     3 2 5 9             00 01 02 03
//     4 3 2 2             10 11 12 13  
//     8 4 1 5             20 21 22 23 
//     3 9 7 5             30 31 31 33 
       

//Output: 
//    3 4 8 3
//    2 3 4 9
//    5 2 1 7
//    9 2 5 5

import java.util.*;
class Matrix
{
	public void Transpose(int Arr[][],int iRow,int iCol)
	{
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
			 System.out.print(Arr[j][i]+"\t");
		    }
		 System.out.println();
		}
		
	}
}
class Program1
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
		System.out.println("After Transpose: ");
		
	    obj.Transpose(Arr,row,col);
		
	}
	
}