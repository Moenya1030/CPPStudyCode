//����һ����ΪLab4_3����Ŀ�����ڼ�������֮��ľ��룬�Լ������㹹�ɵ������ε���������׹�ʽ����
//Ҫ��:�����뽨�����ļ����̣��������Point.h�������������Point.cpp�����ʵ�֣�,�Լ��������cpp�ļ���
//ע�⣬include������Ӧͷ�ļ�����Point.cpp��������cpp�ж�Ӧ����Point.h��
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
