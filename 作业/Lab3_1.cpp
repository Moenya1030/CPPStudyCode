//a.����һ���࣬Point, ����x, y����������˽�����ݳ�Ա(float ����)��
//b.�����������ֹ��캯��:
//Point();//��ʱ��ʼ��x,yΪ0
//Point(float xx,float yy);
//Point(Point &p); //���ƹ��캯��
//c.��д��������x,yֵ�Ĺ��к���setPoint(float xx,float yy)����ʾ����㺯��showPoint������
//d.��д���м�������һ�������p1֮�����Ĺ��к���:float calculate_distance(Point p1);
//���������У���ʾ����p1, p2�����x,y���꣬��ʾ�������������Ϣ������������ľ��룻

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
	cout<<"�������һ������x��y����";
	cin>>p1x>>p1y; 
	p1.setPoint(p1x,p1y);
	p1.showPoint();
	cout<<"������ڶ�������x��y����"; 
	cin>>p2x>>p2y;
	p1.setPoint(p2x,p2y);
	p1.showPoint();
//[Error] 'calculate_distance' was not declared in this scope
	cout<<"����ľ���Ϊ"<<calculate_distance(&p1);
	return 0;
}

