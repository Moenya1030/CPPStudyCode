//建立一个矩形类Rect，该类具有p1、p2两个Point类的数据成员，分别表示矩形的左上角和右下角坐标。
//Point类具有构造函数和复制构造函数、析构函数，里面有相应的初始化语句，以及类似“某某构造/析构函数被调用”的输出语句。
//Rect类具有构造函数和复制构造函数、析构函数，里面有相应的初始化语句，以及类似“某某构造/析构函数被调用”的输出语句。
//Rect类还具有面积函数Area（），周长函数Round（）。
//在main()中建立3个Rect类的对象r1、r2、r3，观察其构造、析构过程。
#include <bits/stdc++.h>

using namespace std;

class Point 
{
	public:
		Point (int x1,int y1);
		Point (Point &p);
		~Point();
	private:
		int x;
		int y;	
};

Point::Point(int x1=0,int y1=0):x(x1),y(y1)
{
	cout<<"Point构造函数"<<endl;
}

Point::Point (Point &p)
{
	x=p.x;
	y=p.y;
	cout<<"Point复制构造函数"<<endl;
}

Point::~Point()
{
	cout<<"Point析构函数"<<endl;
}

class Rect
{
	public:
		Rect(int x1,int y1,int x2,int y2);
		Rect(Rect &r);
		~Rect();
		void Area();
	    void Round();
	private:
		Point p1;
		Point p2;
		int round;
		int area;
};

Rect::Rect(int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2)
{
	round=(fabs(x1-x2)+fabs(y1-y2))*2;
	area=fabs(x1-x2)*fabs(y1-y2);
	cout<<"Rect构造函数"<<endl;
}

Rect::Rect(Rect &r):p1(r.p1),p2(r.p2)
{
	cout<<"Rect复制构造函数"<<endl;
}

Rect::~Rect()
{
	cout<<"Rect析构函数"<<endl;
}

void Rect::Area()
{
	cout<<"矩形面积为："<<area<<endl;
}

void Rect::Round()
{
	cout<<"矩形周长为："<<round<<endl;
}

int main ()
{
	Rect r1(1,1,3,4);
	r1.Round();
	r1.Area();
	Rect r2=r1;
	r2.Round();
	r2.Area();
	Rect r3=r2;
	r3.Round();
	r3.Area();
	return 0;
}
