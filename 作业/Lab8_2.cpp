//结合使用例8.1，8.2的知识，编写一个程序，设计一个复数类，实现对运算符++和--的重载。
//程序命名为Lab9_2.cpp。
#include <iostream>

using namespace std;

class Base0
{
	public:
		Base0(int var =0):var0(var)
		{
			cout<<"Constructing Base0"<<endl;
		}
		
		~Base0()
		{
			cout<<"Destructing Base0"<<endl;
		}
		
		void fun0()
		{
			cout<<"Member of Base0"<<endl;
		}
		
		int var0;
};

class Base1:virtual public Base0
{
	public:
		Base1(int var=0):var1(var)
		{
			cout<<"Constructing Base1"<<endl;
		}
		
		~Base1()
		{
			cout<<"Destructing Base1"<<endl;
		}
		
		int var1;
};

class Base2:virtual public Base0
{
	public:
		Base2(int var=0):var2(var)
		{
			cout<<"Constructing Base2"<<endl;
		}
		
		~Base2()
		{
			cout<<"Destructing Base2"<<endl;
		}
		
		int var2;
};

class Derived:public Base1,public Base2
{
	public:
		Derived(int var=0):var(var)
		{
			cout<<"Constructing Derived"<<endl;
		}
		
		~Derived()
		{
			cout<<"Destructing Derived"<<endl;
		}
		
		int var;
};

void funTest(Base0 *ptr)
{
	ptr->fun0();
}

int main()
{
	Base0 base0;
	Base1 base1;
	Base2 base2;
	Derived d1;
	funTest(&base0);
	funTest(&base1);
	funTest(&base2);
	funTest(&d1);
	return 0;
}



