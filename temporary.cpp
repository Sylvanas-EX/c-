#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	//��¼����Ҫ�����ַ���
	char word[100];
	//����
	scanf("%s",word);
	//��¼������ַ����ĳ���
	int len=strlen(word);
	//��ʼ���
	for (int i=1;i<=len;i++)
	//�������ڵ��п����ǿ�ѭ����,����ѭ������Ϊi
		if(len%i==0)
	{
		int ok=1;
		//��ÿһ����⵽���ַ���ʼ���
		for (int j=i;j<len;j++)

		{
			//�������ַ��������������ڱ߽磬Ҳ����˵ѭ��������i�Ĳ���ʧ��
			if (word[j]!=word[j%i])
			{
				ok=0;
				break;
			}
			//��δʧ�ܣ��������֮���j�Ƿ���������ѭ���ظ�������δʧ�ܣ���˵��ѭ������Ϊi
		}
		//�������飬ѭ������ȷʵ��i
		if (ok==1)
		{
			printf("%d\n",i);
			break;
		};
	}
	system("pause");
	return 0;
}