#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char data[100];
	
	//以写模式打开文件
	ofstream outfile;
	outfile.open("fstream.txt");
	
	cout<<"向文件中写入东西"<<endl;
	cout<<"写入你的名字:";
	cin.getline(data,100);
	
	//向文件写入用户输入的数据
	outfile<<data<<endl;
	
	cout<<"输入你的年龄：";
	cin.getline(data,100);
	
	//再次向文件中写入用户输入的数据
	outfile<<data<<endl;
	
	//关闭打开的文件
	 outfile.close();
	 
	 //以读模式打开文件
	 ifstream infile;
	 infile.open("fstream.txt");
	 
	 cout<<"从文件中读取"<<endl;
	 infile>>data;
	 
	 //在屏幕上写入数据
	 cout<<data<<endl;
	  
	 
	 //再次从文件中读取数据，并显示它
	 infile>>data;
	 cout<<data<<endl;
	 
	 //关闭打开的文件
	 infile.close();
	 
	 return 0;} 
