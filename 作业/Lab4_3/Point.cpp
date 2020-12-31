//建立一个名为Lab4_3的项目，用于计算两点之间的距离，以及三个点构成的三角形的面积（海伦公式）。
//要求:本题请建立多文件工程，如需包含Point.h（类的声明），Point.cpp（类的实现）,以及主程序的cpp文件。
//注意，include包含相应头文件，如Point.cpp和主程序cpp中都应包含Point.h。
#include"Point.h"
#include<iostream>
#include<cmath>
using namespace std;

void Point::ass(double xx,double yy)
{
	x=xx;
	y=yy;
}

double Point::distance(Point &p1,Point &p2)
{                  
	double dis;
	dis=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	return dis;
}

double Point::area(Point &p1,Point &p2,Point &p3)
{                   
	double s,p;
	p=p1.distance(p1,p2)+p1.distance(p1,p3)+p2.distance(p2,p3);
	s=sqrt(p*(p-p1.distance(p1,p2))*(p-p1.distance(p1,p3))*(p-p2.distance(p2,p3)));
	return s;
}
