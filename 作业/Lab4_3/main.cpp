#include"Point.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1,p2,p3;
	double x1,y1,x2,y2,x3,y3;
	cout<<"��ֱ���������������꣺";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	p1.a(x1,y1);
	p2.a(x2,y2);
	p3.a(x3,y3);
	cout<<"��p1���p2�ľ���Ϊ"<<p1.distance(p1,p2)<<endl;
	cout<<"��p1���p3�ľ���Ϊ"<<p1.distance(p1,p3)<<endl;
	cout<<"��p2���p3�ľ���Ϊ"<<p2.distance(p2,p3)<<endl; 
	cout<<"���㹹�ɵ������ε����Ϊ"<<p1.area(p1,p2,p3)<<endl;
	return 0;
}
