//建立一个名为Lab7_2.cpp的程序，用于测试类的派生。要求如下
//a、建立椭圆Oval类，具有长半径Lr、短半径Sr等数据成员，具有面积函数Area（）
//和周长函数Round（），以及适当的构造函数、析构函数。
//b、建立圆Circle类，继承自Oval类，具有适当的构造函数、析构函数。
//c、建立一个圆的对象，调用继承的Area（）、Round（函数）计算其面积和周长。
//d、通过构造函数、析构函数中的输出语句，观察并分析派生类对象的构造和析构全过程。
#include <iostream>
#define pi 3.14

using namespace std;

class Oval
{
	public:
		Oval(double a1=0,double b1=0)
		{
			a=a1;
			b=b1;
			cout<<"调用椭圆Oval类的构造函数"<<endl; 
		}
		
		void Area()
		{
			cout<<"面积为："<<pi*a*b<<endl;
		}
		
		void setAB(double a1=0,double b1=0)
		{
			a=a1;b=b1;
			cout<<"调用椭圆Oval类的setAB()函数"<<endl;
		}
		
		void Round()
		{
			cout<<"周长为:"<<2*pi*b+4*(a-b)<<endl;
		}
		~Oval()
		{
			cout<<"调用椭圆Oval类的析构函数"<<endl;
		} 
	
	private:
		double a;
		double b;
};

class Circle:public Oval
{
	public:
		Circle (double r=0):Oval(r,r)
		{
			cout<<"调用园Circle类的带参数构造函数"<<endl;
		}
		
		void setR(double r=0)
		{
			setAB(r,r);
			cout<<"调用圆Circle类的setR()函数"<<endl; 
		}
		
		~Circle()
		{
			cout<<"调用圆Circle类的析构函数" <<endl;
		} 
};

int main ()
{
	double a,b,r;
	cin>>r;
	Circle c1(r);
	
	c1.Area();
	c1.Round();
	return 0; 
}
