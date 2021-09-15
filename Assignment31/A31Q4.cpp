//Write application which accept file name from user and display size of file
//Input : Demo.txt
//Output : File size is 56 bytes
#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
	public:
	      int fd;
	      FileX(char name[])
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
		  
		 int CalFileSize()
          {
            char Arr[10];
            int ret = 0,size=0;
        
            while((ret = read(fd,Arr,10)) != 0) 
			 {
                size=size+ret;
             }
			return size;
          }
};

int main()
{
	int iSize=0,iRet=0;
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	
	FileX obj(str);
	
	iRet=obj.CalFileSize();
	cout<<"The size of file is "<<iRet<<"\n";
	return 0;
}