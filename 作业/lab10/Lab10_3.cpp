//��ɿα�P344ϰ��8-8��

#include<iostream>
using namespace std;

class BaseClass{
	public:
		virtual void fun1()
		{
			cout<<"����BaseClass��fun1����"<<endl; 
		}
		
		void fun2()
		{	
			cout<<"����BaseClass��fun2����"<<endl;
		}
};

class DerivedClass:public BaseClass
{
	public:
		void fun1()
		{
			cout<<"����DerivedClass��fun1����"<<endl;
		}
		
		void fun2()
		{
			cout<<"����DerivedClass��fun2����"<<endl;	
		}
};

int main()
{
	DerivedClass d;
	BaseClass *bc=&d;
	DerivedClass *dc=&d;
	
	cout<<"ͨ��ָ��BaseClass���ָ�����d�����Ա����:\n";
	bc->fun1();
	bc->fun2();
	
	cout<<"\nͨ��ָ��DerivedClass���ָ�����d�����Ա����:\n";
	dc->fun1();
	dc->fun2();
	
	return 0;
}
