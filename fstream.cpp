#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char data[100];
	
	//��дģʽ���ļ�
	ofstream outfile;
	outfile.open("fstream.txt");
	
	cout<<"���ļ���д�붫��"<<endl;
	cout<<"д���������:";
	cin.getline(data,100);
	
	//���ļ�д���û����������
	outfile<<data<<endl;
	
	cout<<"����������䣺";
	cin.getline(data,100);
	
	//�ٴ����ļ���д���û����������
	outfile<<data<<endl;
	
	//�رմ򿪵��ļ�
	 outfile.close();
	 
	 //�Զ�ģʽ���ļ�
	 ifstream infile;
	 infile.open("fstream.txt");
	 
	 cout<<"���ļ��ж�ȡ"<<endl;
	 infile>>data;
	 
	 //����Ļ��д������
	 cout<<data<<endl;
	  
	 
	 //�ٴδ��ļ��ж�ȡ���ݣ�����ʾ��
	 infile>>data;
	 cout<<data<<endl;
	 
	 //�رմ򿪵��ļ�
	 infile.close();
	 
	 return 0;} 
