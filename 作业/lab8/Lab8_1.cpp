//建立一个名为Lab8_1.cpp的程序，实现以下要求：
//a、定义一个基类Person，数据成员包含字符数组name[10]，用于保存姓名。
//函数成员包括设置姓名的成员函数SetName（char *name），获取姓名的成员函数GetName（），打印信息的成员函数PrintInfo（）。
//b、从Person类派生出Student类，增加整型数据成员number，用于保存学号。
//新增的函数成员包括设置学号的成员函数SetNum（int number），获取姓名的成员函数GetNum（）,重写基类成员函数PrintInfo，以使其能输出姓名与学号。
//c、测试时，在main中建立两个类的对象，并通过对象调用各个函数。
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
	p.SetName("张三");
	s.SetNum(20192005);
	p.PrintInfo();
	s.SetName("李四");
	s.SetNum(20192005);
	s.PrintInfo();
	return 0;
}
