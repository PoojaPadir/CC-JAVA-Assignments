
#include<stdio.h>

int Product(int iNo)
{
	static int mult=1;
	if(iNo>0)
	{
		mult=mult*(iNo%10);
		iNo=iNo/10;
		Product(iNo);
	}
	return mult;

}
int main()
{
	int iRet=0,iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=Product(iValue);
	printf("Product of digit is: %d\n",iRet);
	
	return 0;
}