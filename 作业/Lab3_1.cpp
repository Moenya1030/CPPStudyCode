//a.定义一个类，Point, 具有x, y轴坐标两个私有数据成员(float 类型)；
//b.定义以下三种构造函数:
//Point();//此时初始化x,y为0
//Point(float xx,float yy);
//Point(Point &p); //复制构造函数
//c.编写用于设置x,y值的公有函数setPoint(float xx,float yy)；显示坐标点函数showPoint（）；
//d.编写具有计算与另一个类对象p1之间距离的公有函数:float calculate_distance(Point p1);
//在主函数中，提示输入p1, p2两点的x,y坐标，显示两个点的坐标信息，并计算两点的距离；

#include<bits/stdc++.h>

using namespace std;

class Point
{
	private:
		float x;
		float y;
	public:
		Point()
		{
			x=0;
			y=0;
		}
		Point(float xx,float yy);
		Point(Point &p);
		void setPoint(float xx,float yy);
		void showPoint();
		float calculate_distance(Point p1)
		{
			return sqrt(fabs(x-p1.x)*fabs(x-p1.x)+fabs(y-p1.y)*fabs(y-p1.y));
		}
}; 

Point::Point(float xx,float yy)
{
	x=xx;
	y=yy;
}

Point::Point(Point &p)
{
	x=p.x;
	y=p.y;
}

void Point::setPoint(float xx,float yy)
{
	x=xx;
	y=yy;
} 

void Point::showPoint()
{
	cout<<"x: "<<x<<" y: "<<y<<endl;	
}

int main ()
{
	Point p1;
	float p1x,p1y,p2x,p2y;
	p1.showPoint();
	cout<<"请输入第一个数的x，y坐标";
	cin>>p1x>>p1y; 
	p1.setPoint(p1x,p1y);
	p1.showPoint();
	cout<<"请输入第二个数的x，y坐标"; 
	cin>>p2x>>p2y;
	p1.setPoint(p2x,p2y);
	p1.showPoint();
//[Error] 'calculate_distance' was not declared in this scope
	cout<<"两点的距离为"<<calculate_distance(&p1);
	return 0;
}

