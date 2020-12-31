//建立一个名为Lab12_3的项目，借助P376例9-10的队列类模板，实现以下要求:
//a、建立一个学生类Students，具有学号、姓名、性别等数据成员，具有显示学生信息的show()函数
//b、往循环队列中存入至少5个学生的信息
//c、从队列中取出每个学生的信息，并显示。

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
	cout<<"学号:"<<num<<endl;
	cout<<"姓名:"<<name<<endl;
	cout<<"性别:"<<sex<<endl;
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
		cout<<"输入第"<<i+1<<"个学生的学号、姓名、性别："<<endl;
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
