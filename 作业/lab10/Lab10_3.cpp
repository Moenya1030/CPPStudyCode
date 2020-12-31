//完成课本P344习题8-8。

#include<iostream>
using namespace std;

class BaseClass{
	public:
		virtual void fun1()
		{
			cout<<"调用BaseClass的fun1函数"<<endl; 
		}
		
		void fun2()
		{	
			cout<<"调用BaseClass的fun2函数"<<endl;
		}
};

class DerivedClass:public BaseClass
{
	public:
		void fun1()
		{
			cout<<"调用DerivedClass的fun1函数"<<endl;
		}
		
		void fun2()
		{
			cout<<"调用DerivedClass的fun2函数"<<endl;	
		}
};

int main()
{
	DerivedClass d;
	BaseClass *bc=&d;
	DerivedClass *dc=&d;
	
	cout<<"通过指向BaseClass类的指针调用d对象成员函数:\n";
	bc->fun1();
	bc->fun2();
	
	cout<<"\n通过指向DerivedClass类的指针调用d对象成员函数:\n";
	dc->fun1();
	dc->fun2();
	
	return 0;
}
