//Write application which accept file name from user and one string from user.Write that string at the end of file
//Input : Demo.txt
//        Hello World
//Output : Write Hello World at the end of Demo.txt file
#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
	public:
	      int fd;
	      FileX(char name[])
		  {
			   fd=open(name,O_WRONLY | O_APPEND);   //fd=creat(name,O_CREAT);    
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
		  
		 void WriteData()
		 {
			 char str[]="Hello World";
			 write(fd,str,11);
		 }
};

int main()
{
	int iSize=0,iRet=0;
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	
	FileX obj(str);
	
	obj.WriteData();
	return 0;
}