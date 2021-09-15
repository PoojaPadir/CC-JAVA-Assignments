//Write application which accept file name from user and read all the data from that file and display contents on screen
//Input : Demo.txt
//Output : Dispaly all the data of file
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
		   void ReadData()
        {
          char Arr[10];
          int ret = 0;
        
           while((ret = read(fd,Arr,10)) != 0) 
			{
             write(1,Arr,ret);
            }
        }
};

int main()
{
	int iSize=0;
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	
	FileX obj(str);
	
	obj.ReadData();
	return 0;
}