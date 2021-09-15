//Write a program which accept number of rows and number of columns from user and display below pattern
//Input: iRow=4    iCol=4
//Output: A B C D
//        a b c d 
//        A B C D
//        a b c d

import java.util.*;
class Pattern
{
	public void Display(int iRow,int iCol)
	{
		int i=0,j=0;
		char ch;
		for(i=1;i<=iRow;i++)
		{
			for(j=1,ch='A';j<=iCol;j++,ch++)
			{
				if(i%2==0)
				{
				   System.out.print((char)(int)(ch+32)+"\t");
				}
				else
				{
					System.out.print(ch+"\t");
				}
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
		
		Pattern obj=new Pattern();
		obj.Display(row,col);
	}
	
}