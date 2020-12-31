//����һ����ΪLab8_3.cpp�ĳ������ڼ����Բ��Բ����ı�����������Ҫ�����£�
//a������һ��Point�࣬�������ݳ�Աx,y������㣩
//b����PointΪ���࣬������һ��circle�ࣨԲ�ࣩ���������ݳ�Աr���뾶��
//c����Circle��Ϊ���࣬������һ��Cylinder��Բ���壩�࣬���������ݳ�Աh(��)������������ݳ�Ա�ķ������ԡ�
//d�� ��main�����У�����һ��Բ�����󣬼����������������
#include<iostream>
#define PI 3.14 

using namespace std;

class Point
{
	public:
		Point(float x=0,float y=0):x(x),y(y){}
		
		float getX()
		{
			return x;
		}
		
		float getY()
		{
			return y;
		}
		
	private:
		float x,y;
};

class Circle:public Point
{
	public:
		Circle(float x=0,float y=0,float r=0):Point(x,y),r(r)
		{
			
		}
		
		float getR()
		{
			return r;
		}
		
		float Area1()
		{
			return PI*r*r;
		}
		
		float Per()
		{
			return 2*PI*r;
		}
	private:
		float r;
};

class Cylinder:public Circle
{
	public:
		Cylinder(float h,float r=0,float x=0,float y=0):Circle(x,y,r),h(h)
		{
		
		}
		
		float getH()
		{
			return h;
		}
		
		float Volume()
		{
			return Area1()*h;
		}
		
		float Area2()
		{
			return 2*Area1()+Per()*h;
		
		}
	private:
		float h;
};

int main()
{
	Cylinder c(4,2);
	cout<<"�����:"<<c.Area2()<<endl;
	cout<<"���:"<<c.Volume()<<endl; 
	return 0;
}
