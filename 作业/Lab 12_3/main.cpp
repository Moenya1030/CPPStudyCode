//����һ����ΪLab12_3����Ŀ������P376��9-10�Ķ�����ģ�壬ʵ������Ҫ��:
//a������һ��ѧ����Students������ѧ�š��������Ա�����ݳ�Ա��������ʾѧ����Ϣ��show()����
//b����ѭ�������д�������5��ѧ������Ϣ
//c���Ӷ�����ȡ��ÿ��ѧ������Ϣ������ʾ��

#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

class Students
{
	public:
		Students(int n=1,string sname="xxx",string ssex="nan"):num(n),name(sname),sex(ssex){};
		void reset (int n,string sname,string ssex);
		void show();
		
	private:
		int num;
		string name;
		string sex;
};

void Students::reset(int n,string sname,string ssex)
{
	num=n;
	name=sname;
	sex=ssex;
}

void Students::show()
{
	cout<<"ѧ��:"<<num<<endl;
	cout<<"����:"<<name<<endl;
	cout<<"�Ա�:"<<sex<<endl;
}

int main()
{
	int num;
	string name;
	string sex;
	Queue<Students>stu;
	Students a[5];
	for (int i=0;i<5;i++)
	{
		cout<<"�����"<<i+1<<"��ѧ����ѧ�š��������Ա�"<<endl;
		cin>>num>>name>>sex;
		a[i].reset(num,name,sex);
		stu.insert(a[i]);
	}
	
	int k=0;
	cout<<endl;
	cout<<"stu:"<<endl;
	while (!stu.isEmpty())
	{
		a[k]=stu.remove();
		a[k].show();
		k++;
		cout<<endl;
	}
	return 0;
}
