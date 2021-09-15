//Write a program which accept number of rows and number of columns from user ad display below pattrn
//Sparse matrix is the matrix with the majority of its elements equal to zero

//Input: iRow=3  iCol=4

// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 



import java.util.*;
class Pattern
{
	public void Pattern(int Arr[][],int iRow,int iCol)
	{
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
			  System.out.print(i+"\t");
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
		
		Pattern obj=new Pattern();
		
	    obj.Pattern(Arr,row,col);
		
	}
	
}