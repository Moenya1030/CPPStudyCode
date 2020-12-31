//建立一个名为Lab8_2.cpp的程序，参照P276图7-8，建立一个具有三层的类继承结构的程序，并实现以下功能:
//a、增加各个类的构造、析构函数，其中通过输出语句显示其执行状态
//b、使用类型兼容规则7.3相关知识，在类体之外建立一个名为funTest（ ）的函数，形参为基类的对象
//c、在main中建立各个类的对象，分别尝试作为funTest的实参
#include<iostream>

using namespace std;

class Base0
{
	public:
		Base0(int i)
		{
			cout<<"Constructing Base0"<<i<<endl;
		
		}
		~Base0()
		{
			cout<<"Destructing Base0"<<endl;
		}
		
		void fun()
		{
			cout<<"Member of Base0"<<endl;
		}
};

class Base1:virtual public Base0
{
	public:
		int var1;
		Base1(int i,int j):Base0(j),var1(i)
		{	
			cout<<"Constructing Base1"<<j<<endl;
		}
		
		~Base1()
		{
			cout<<"Destructing Base1"<<endl;
		}
		
		void fun()
		{
			cout<<"Member of Base1"<<endl;
		}
};

class Base2:virtual public Base0
{
	public:
		int var2;
		Base2(int i,int j):Base0(j),var2(i)
		{
			cout<<"Constructing Base2"<<j<<endl;
		}
		
		~Base2()
		{	
			cout<<"Destructing Base2"<<endl;
		}
		
		void fun()
		{
			cout<<"Member of Base2"<<endl;
		}
};

class Derived:public Base1,public Base2
{
	public:
		int var;
		Derived(int a,int b,int c):Base0(b),Base2(b,a),Base1(a,b),var(c)
		{	
			cout<<"Constructing Derived"<<endl;
		}
		
		~Derived()
		{	
			cout<<"Destructing Derived"<<endl;
		}
		
		void fun()
		{
			cout<<"Member of Derived"<<endl;
		}
};

void funTest(Base0 *ptr)
{
	ptr->fun();
}

int main()
{
	Base0 base0(1);
	Base1 base1(1,2);
	Base2 base2(4,5);
	Derived d(1,2,3);
	
	
	funTest(&base0);
	funTest(&base1);
	funTest(&base2);
	funTest(&d);
	return 0;
}
