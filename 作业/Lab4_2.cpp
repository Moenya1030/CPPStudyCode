//设计一个Exam类，其中包含一个静态数据成员count，用于记录存在的Exam对象的个数。一个成员变量ID用于记录当前的编号。
//利用构造、析构函数，对count++或--，并显示“ID为?的对象创建（被销毁），目前共有?个对象”。
//建立一个函数test，用于建立Exam类的对象A1、A2。
//在main中调用test函数，然后建立Exam类的对象A3、A4。
//通过以上程序观察4个的对象建立、销毁的过程
#include <bits/stdc++.h>

using namespace std;

class Exam
{
	private:
		static int count;
		long ID;
	public:
		Exam(long id):ID(id)
		{
			count ++;
			cout<<"id为"<<ID<<"的对象被创建，目前共有"<<count<<"个对象"<<endl;
		}
		~Exam()
		{
			Exam::count--;
			cout<<"id为"<<ID<<"的对象被销毁，目前共有"<<count<<"个对象"<<endl;
		}
}; 

int Exam::count=0;

void test(long id)
{
	Exam t1(id+1);
	Exam t2(id+2);
}

int main ()
{
	test (1111);
	Exam A0(2222);
	Exam A1(3333);
	
	return 0;
}
