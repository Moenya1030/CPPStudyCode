#include"Point.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1,p2,p3;
	double x1,y1,x2,y2,x3,y3;
	cout<<"请分别输入三个点的坐标：";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	p1.a(x1,y1);
	p2.a(x2,y2);
	p3.a(x3,y3);
	cout<<"点p1与点p2的距离为"<<p1.distance(p1,p2)<<endl;
	cout<<"点p1与点p3的距离为"<<p1.distance(p1,p3)<<endl;
	cout<<"点p2与点p3的距离为"<<p2.distance(p2,p3)<<endl; 
	cout<<"三点构成的三角形的面积为"<<p1.area(p1,p2,p3)<<endl;
	return 0;
}
