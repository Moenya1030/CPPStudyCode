//��1000��ң�ÿ�ο�Ͷ100�����������С��
//����¶��ˣ��ɵñ��𼰽�������180��ң�����´���ÿ����ʧ100��
//����ʱͶ��10�Σ�ÿ��ѡ��big��small�����������ʣ�¶��ٽ�ҡ�
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
using namespace std;

int main ()
{
	int num[11],number;
	int pri=1000;
	char choice[10],ans;
	
	for (int i=0;i<=9;i++)
	{
		cin>>choice[i];
	}
	
	for (int i=0;i<=9;i++)
	{
		srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
		number = rand() % 101; //����0-100�������
		num[i]=number;
		cout<<num[i]<<" ";
		Sleep(1000);
	} 
	
	for (int i=0;i<=9;i++)
	{
		if (num[i]>=50)
		{
			ans='b';
		}
		else
			ans='s';
			
		if (choice[i]==ans)
		{
			pri+=180;
		}
		else
			pri-=100;
	}
	
	cout<<endl<<pri;
	return 0;
}
