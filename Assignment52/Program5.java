//Write a program which accept matrix from user and check whether it is sparse matrix or not
//Sparse matrix is the matrix with the majority of its elements equal to zero
//if count of zero element is greater than count of non zero element then it is sparse matrix

//Input:
//     1 0 3 0             00 01 02 03
//     0 6 0 0             10 11 12 13  
//     0 0 1 0             20 21 22 23 
//     9 0 0 9             30 31 31 33 
       

//Output: TRUE

import java.util.*;
class Matrix
{
	public boolean ChkSparse(int Arr[][],int iRow,int iCol)
	{
		int iCnt=0,Zero=0;
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
			  if(Arr[i][j]==0)
			  {
			    Zero++;
			  }
			  else
			  {
				  iCnt++;
			  }
		    }
			
		}
		
		if(Zero>iCnt)
		{
			return true;
		}
		else
		{
			return false;
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
		
	    boolean ret=obj.ChkSparse(Arr,row,col);
		if(ret==true)
		{
		 System.out.println("Matrix is sparse matrix");
		}
		else
		{		
	      System.out.println("Matrix is not sparse matrix");
		}
		
	}
	
}