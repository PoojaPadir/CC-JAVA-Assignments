//Write a program which accept matrix from user and return largest number from both the diagonal
//Input:
//Number: 9
//               00 01 02 03
//   3 2 5 9     10 11 12 13  
//   4 3 2 2     20 21 22 23 
//   8 4 1 9     30 31 31 33 
//   3 9 7 5     

//Output: 9


import java.util.*;
class Matrix
{
	public int Max(int Arr[][],int iRow,int iCol)
	{
		if(iRow!=iCol)
		{
			System.out.println("Number of rows and columns should be same");
			return -1;
			
		}
		int iMax=Arr[0][0];
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
			 
			 if((i==j) || ((i+j)==iRow-1))
			 {
				 if(Arr[i][j] > iMax)
					 iMax=Arr[i][j];
			 }
		    }
		}
		return iMax;
	}
}
class Program3
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
		int ret=obj.Max(Arr,row,col);
		System.out.println("Largest element is :"+ret);
	}
	
}