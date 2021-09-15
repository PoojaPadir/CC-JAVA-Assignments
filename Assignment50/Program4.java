//Write a program which accept number of rows and number of columns from user and display below pattern
//Input: iRow=4    iCol=5
//Output: 4 4 4 4 4
//        3 3 3 3 3
//        2 2 2 2 2 
//        1 1 1 1 1 

import java.util.*;
class Pattern
{
	public void Display(int iRow,int iCol)
	{
		int i=0,j=0;
		for(i=iRow;i>=1;i--)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
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
		
		Pattern obj=new Pattern();
		obj.Display(row,col);
	}
	
}