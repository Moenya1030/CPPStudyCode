//����һ����ΪLab7_2.cpp�ĳ������ڲ������������Ҫ������
//a��������ԲOval�࣬���г��뾶Lr���̰뾶Sr�����ݳ�Ա�������������Area����
//���ܳ�����Round�������Լ��ʵ��Ĺ��캯��������������
//b������ԲCircle�࣬�̳���Oval�࣬�����ʵ��Ĺ��캯��������������
//c������һ��Բ�Ķ��󣬵��ü̳е�Area������Round��������������������ܳ���
//d��ͨ�����캯�������������е������䣬�۲첢�������������Ĺ��������ȫ���̡�
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
			cout<<"������ԲOval��Ĺ��캯��"<<endl; 
		}
		
		void Area()
		{
			cout<<"���Ϊ��"<<pi*a*b<<endl;
		}
		
		void setAB(double a1=0,double b1=0)
		{
			a=a1;b=b1;
			cout<<"������ԲOval���setAB()����"<<endl;
		}
		
		void Round()
		{
			cout<<"�ܳ�Ϊ:"<<2*pi*b+4*(a-b)<<endl;
		}
		~Oval()
		{
			cout<<"������ԲOval�����������"<<endl;
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
			cout<<"����԰Circle��Ĵ��������캯��"<<endl;
		}
		
		void setR(double r=0)
		{
			setAB(r,r);
			cout<<"����ԲCircle���setR()����"<<endl; 
		}
		
		~Circle()
		{
			cout<<"����ԲCircle�����������" <<endl;
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
