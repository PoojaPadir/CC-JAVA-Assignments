//Write application which accept file name from user and create that file
//Input : Demo.txt
//Output : File created sucessfully
#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
	public:
	      int fd;
	      FileX(char name[])
		  {
			   fd=creat(name,0777);   //fd=creat(name,O_CREAT);    
			  if(fd==-1)
			  {
				  cout<<"Unable to create file\n";
			  }
			  else
			  {
				  cout<<"File created successfully";
			  }
		  }
		  ~FileX()
		  {
			  close(fd);
		  }
};

int main()
{
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	
	FileX obj(str);
	return 0;
}