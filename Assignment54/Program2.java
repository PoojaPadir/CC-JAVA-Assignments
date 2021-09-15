//Write a program which accept number of rows and number of columns from user ad display below pattrn
//Sparse matrix is the matrix with the majority of its elements equal to zero

//Input: iRow=4  iCol=3

//     1 2 3              00 01 02 03
//     1 2 3              10 11 12 13  
//     1 2 3              20 21 22 23 
//     1 2 3              30 31 31 33 
       



import java.util.*;
class Pattern
{
	public void Pattern(int Arr[][],int iRow,int iCol)
	{
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
			  System.out.print(j+"\t");
		    }
			System.out.println();
		}
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
		
		Pattern obj=new Pattern();
		
	    obj.Pattern(Arr,row,col);
		
	}
	
}