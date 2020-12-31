//建立一个名为Lab8_3.cpp的程序，用于计算出圆和圆柱体的表面积和体积，要求如下：
//a、定义一个Point类，包含数据成员x,y（坐标点）
//b、以Point为基类，派生出一个circle类（圆类），增加数据成员r（半径）
//c、以Circle类为基类，派生出一个Cylinder（圆柱体）类，再增加数据成员h(高)。设计类中数据成员的访问属性。
//d、 在main函数中，建立一个圆柱对象，计算其表面积和体积。
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
	cout<<"表面积:"<<c.Area2()<<endl;
	cout<<"体积:"<<c.Volume()<<endl; 
	return 0;
}
