//Write a program which accept number of rows and number of columns from user ad display below pattrn
//Sparse matrix is the matrix with the majority of its elements equal to zero

//Input: iRow=3  iCol=5

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1



import java.util.*;
class Pattern
{
	public void Pattern(int Arr[][],int iRow,int iCol)
	{
		
		for(int i=0;i<iRow;i++)
		{
			for(int j=iCol;j>=1;j--)
			{
			  System.out.print(j+"\t");
		    }
			System.out.println();
		}
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
		
		Pattern obj=new Pattern();
		
	    obj.Pattern(Arr,row,col);
		
	}
	
}