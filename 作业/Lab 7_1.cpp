//����һ����ΪLab7_1.cpp�ĳ��򡣲��ղ��Ľ�P232��6-23��ѧϰstring���ʹ�á�Ҫ������
//a���Ӽ��������벢�洢�����ַ�����
//b������P231��6-1������5����ͬ�������
//c��ͨ���������string�����Ҫ������������������Ϊ��õ�����5��������
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string a,b,s;
	int i,j,k;
	cin>>a>>b;
	s=a+b;
	if (a==b)
	{
		cout<<"a=b"<<endl;
	}
	else
	{
		if (a.length()==b.length())
		{
			cout<<"a��b�������"<<endl;
		}
		else
		{
			if (a>b)
			{
				cout<<"a>b"<<endl;
			}
		}
	}
	
	if (a.size()>b.size())
	{
		cout<<"a�ַ�����С����b"<<endl;
	} 
	
	if (a.empty())
	{
		cout<<"�ַ�����Ϊ��"<<endl; 
	}
	
	cout<<"a�ɴ������ַ�������Ϊ:"<<a.max_size();
	return 0;
 } 
