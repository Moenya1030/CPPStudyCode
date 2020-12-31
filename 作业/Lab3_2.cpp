//����һ��������Rect���������p1��p2����Point������ݳ�Ա���ֱ��ʾ���ε����ϽǺ����½����ꡣ
//Point����й��캯���͸��ƹ��캯����������������������Ӧ�ĳ�ʼ����䣬�Լ����ơ�ĳĳ����/�������������á��������䡣
//Rect����й��캯���͸��ƹ��캯����������������������Ӧ�ĳ�ʼ����䣬�Լ����ơ�ĳĳ����/�������������á��������䡣
//Rect�໹�����������Area�������ܳ�����Round������
//��main()�н���3��Rect��Ķ���r1��r2��r3���۲��乹�졢�������̡�
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
	cout<<"Point���캯��"<<endl;
}

Point::Point (Point &p)
{
	x=p.x;
	y=p.y;
	cout<<"Point���ƹ��캯��"<<endl;
}

Point::~Point()
{
	cout<<"Point��������"<<endl;
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
	cout<<"Rect���캯��"<<endl;
}

Rect::Rect(Rect &r):p1(r.p1),p2(r.p2)
{
	cout<<"Rect���ƹ��캯��"<<endl;
}

Rect::~Rect()
{
	cout<<"Rect��������"<<endl;
}

void Rect::Area()
{
	cout<<"�������Ϊ��"<<area<<endl;
}

void Rect::Round()
{
	cout<<"�����ܳ�Ϊ��"<<round<<endl;
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
