//����һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ��
//��Ǯ��ټ������̡�ĸ��������ֻ
#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	for (a=0;a<=20;a++)
	{
		for (b=0;b<=33;b++)
		{
			for (c=0;c<=300;c+=3)
			{
				if ((a+b+c==100) && (a*5+b*3+c/3))
				{
					cout<<"�̣�"<<a<<" "<<"ĸ��"<<b<<" "<<"����"<<c<<endl; 
				}
			}
		}
	}
	return 0;	
} 
