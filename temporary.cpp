#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	//记录即将要检测的字符串
	char word[100];
	//输入
	scanf("%s",word);
	//记录输入的字符串的长度
	int len=strlen(word);
	//开始检测
	for (int i=1;i<=len;i++)
	//如果这个节点有可能是可循环的,假设循环长度为i
		if(len%i==0)
	{
		int ok=1;
		//从每一个检测到的字符开始检测
		for (int j=i;j<len;j++)

		{
			//如果这个字符处不可能是周期边界，也就是说循环周期是i的猜想失败
			if (word[j]!=word[j%i])
			{
				ok=0;
				break;
			}
			//若未失败，继续检测之后的j是否满足这种循环重复，若都未失败，则说明循环周期为i
		}
		//经过检验，循环周期确实是i
		if (ok==1)
		{
			printf("%d\n",i);
			break;
		};
	}
	system("pause");
	return 0;
}