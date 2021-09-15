//Write a program which accept matrix from user and check whether it is identitiy matrix or not

//Input:
//Number: 9
//     1 0 0 0             00 01 02 03
//     0 1 0 0             10 11 12 13  
//     0 0 1 0             20 21 22 23 
//     0 0 0 1             30 31 31 33 
       

//Output: TRUE

import java.util.*;
class Matrix
{
	public boolean ChkId(int Arr[][],int iRow,int iCol)
	{
		int iCnt=0;
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
			  if(i==j && Arr[i][j]==1 && Arr[i][j]==0)
			  {
			    iCnt++;
			  }
			  else
			  {
				  break;
			  }
		    }
			
		}
		
		if(iCnt==iRow*iCol)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
class Program4
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
		
	    boolean ret=obj.ChkId(Arr,row,col);
		if(ret==true)
		{
		 System.out.println("Matrix is identitiy matrix");
		}
		else
		{		
	      System.out.println("Matrix is not identitiy matrix");
		}
		
	}
	
}