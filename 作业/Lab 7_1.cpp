//建立一个名为Lab7_1.cpp的程序。参照并改进P232例6-23，学习string类的使用。要求如下
//a、从键盘中输入并存储两个字符串。
//b、测试P231表6-1中至少5个不同运算符。
//c、通过网络查找string类的主要函数，测试其中你认为最常用的至少5个函数。
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
			cout<<"a和b长度相等"<<endl;
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
		cout<<"a字符串大小大于b"<<endl;
	} 
	
	if (a.empty())
	{
		cout<<"字符串不为空"<<endl; 
	}
	
	cout<<"a可存放最大字符串长度为:"<<a.max_size();
	return 0;
 } 
