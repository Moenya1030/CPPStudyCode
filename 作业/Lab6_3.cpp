//����һ���򵥵��ַ��Ի����ܳ���ʵ������ܼ����ܹ��̡�
//Ҫ������:
//a��ʹ��N��2�еĶ�ά����洢һ���ַ��Ի���
//b����ȡ���������һ������
//c�������Լ��ļ��ܺ������м��ܣ��������
//d�������Լ��Ľ��ܺ��������Ľ��н��ܣ�������Ӧ������һ�¡�

#include <bits/stdc++.h> 

using namespace std;

string s1="31241242341231231231231231232jijijijijijijijiij";
string s2="sdfwer234123532rtwefsef23423rdwef234fdr312423rf";

string encrypt(string a)
{
	for (int i=0;i<a.length();i++)
	{
		if (a[i]>='0' && a[i]<='9')
		{
			a[i]=s2[a[i]-'0'];
		}
		else if (a[i]>'a' && a[i]<='z')
		{
			a[i]=s2[a[i]-'a'+10];
		}
		else if (a[i]>'A' && a[i]<'Z')
		{
			a[i]=s2[a[i]-'A'+36];
		}
		return a;
	}
}

string decrypt(string a)
{
	for (int i=0;i<a.length();i++)
	{
		for (int j=0;j<62;j++)
		{
			if (a[i]==s2[j])
			{
				a[i]=s1[j];
				break;
			}
		}
	}
}

int main()
{
	encrypt(s1);
	decrypt(s1);
	encrypt(s2);
	decrypt(s2);
	return 0;
}	

