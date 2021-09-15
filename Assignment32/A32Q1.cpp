//Write application which accept two file names from user.Compare the contents of that two files.If contents are same then return true otherwise return false
//Input : Demo.txt    Hello.txt    
//Output : Compare the contents of Demo.txt and Hello.txt
#include<iostream>
#include<fcntl.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

using namespace std;

class FileX
{
	public:
	      int fd;
	      FileX(char name1[],char name2[])
		  {
			   fd=open(name,O_RDONLY);   //fd=creat(name,O_CREAT);    
			  if(fd==-1)
			  {
				  cout<<"Unable to open file\n";
			  }
			  else
			  {
				  cout<<"File opened successfully\n";
			  }
		  }
		  ~FileX()
		  {
			  close(fd);
		  }
		  
		 BOOL CompareX()
		 {
			 int ret1 = 0,ret2=0,size=0;
        
            while(((ret1 = read(fd,Arr,10)) != 0) && ((ret2 = read(fd,Arr,10)) != 0) ) 
			 {
                for(i=0;i<=ret1;i++)
				{
					if(name1[i]==name2[i])
				}
             }
		 }
};

int main()
{
	int iSize=0,iRet=0;
	char str1[30],str2[30];
	cout<<"Enter 1st file name\n";
	cin>>str;
	cout<<"Enter 2nd file name\n";
	cin>>str2;
	
	FileX obj(str1,str2);
	
	obj.WriteData();
	return 0;
}