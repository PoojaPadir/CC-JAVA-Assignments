//Write a program which accept matrix from user and display addition of elements from each column
//Input:
//Number: 9
//     3 2 5 9             00 01 02 03
//     4 3 2 2             10 11 12 13  
//     8 4 1 9             20 21 22 23 
//     3 9 7 5             30 31 31 33 
       

//Output: 18 18 15 25


import java.util.*;
class Matrix
{
	public void AddColumn(int Arr[][],int iRow,int iCol)
	{
		
		int iSum=0;
		for(int i=0;i<iCol;i++)
		{
			iSum=0;
			for(int j=0;j<iRow;j++)
			{
			  iSum=iSum+Arr[j][i];
		    }
			System.out.print(iSum+"\t");
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
		System.out.println("Addition of each column is: ");
		
	    obj.AddColumn(Arr,row,col);
		
	}
	
}