//Write a program which accept matrix from user and return addition of diagonal elements
//Input:
//   3 2 5 9
//   4 3 2 2
//   8 4 1 5
//   3 9 7 5

//Output: 12


import java.util.*;
class Matrix
{
	public int AddDiagonal(int Arr[][],int iRow,int iCol)
	{
		int sum=0;
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
			  if(i==j)
			  {
				  sum=sum+Arr[i][j];
			  }
		    }
		}
		return sum;
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
		int ret=obj.AddDiagonal(Arr,row,col);
		System.out.println("Addition of diagonal elements is: "+ret);
	}
	
}