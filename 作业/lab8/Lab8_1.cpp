//����һ����ΪLab8_1.cpp�ĳ���ʵ������Ҫ��
//a������һ������Person�����ݳ�Ա�����ַ�����name[10]�����ڱ���������
//������Ա�������������ĳ�Ա����SetName��char *name������ȡ�����ĳ�Ա����GetName��������ӡ��Ϣ�ĳ�Ա����PrintInfo������
//b����Person��������Student�࣬�����������ݳ�Աnumber�����ڱ���ѧ�š�
//�����ĺ�����Ա��������ѧ�ŵĳ�Ա����SetNum��int number������ȡ�����ĳ�Ա����GetNum����,��д�����Ա����PrintInfo����ʹ�������������ѧ�š�
//c������ʱ����main�н���������Ķ��󣬲�ͨ��������ø���������
#include<iostream>

using namespace std;

class Person
{
	public:
		void SetName(char *name)
		{
			int j=0;
			for(int i=0;name[i]!='\0'&&i<10;i++)
			{
				this->name[j]=name[i];
				j++;
			}
		}
		
		char* GetName()
		{
			return name;
		}
		
		void PrintInfo()
		{
			for(int i=0;name[i]!='\0'&&i<10;i++)
			{
				cout<<name[i];
			}
			cout<<endl;
		}
		
	private:
		char name[10];
};

class Student:public Person
{
	public:
		void SetNum(int number)
		{
			this->number=number;
		
		}
		int GetNum()
		{
			return number;
		}
		
		void PrintInfo()
		{
			char *name=GetName();
			for(int i=0;name[i]!='\0'&&i<10;i++)
			{
				cout<<name[i];
			}
			cout<<" "<<number;
		}
		
	private:
		int number;		
};

int main()
{
	Person p;
	Student s;
	p.SetName("����");
	s.SetNum(20192005);
	p.PrintInfo();
	s.SetName("����");
	s.SetNum(20192005);
	s.PrintInfo();
	return 0;
}
