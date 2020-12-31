//����һ����ΪLab7_3.cpp�ĳ���ʵ������Ҫ��
//a������һ��ͼ����Shape���Լ��������������ࣺ������Rectangle��Բ��Circle�����߶������������getArea( )���ܳ�����getRound( )
//b������һ����������Square�����Ǿ�����Rectangle��������
//c�����к�������һ��show( )��������ʾ����һ�仰�������ǣ�����Ķ���
//�����main�н���������Ķ��󣬲����Ե����亯����

#include <iostream>

using namespace std;

class Shape
{
	public:
		Shape()
		{
			
		}
		
		~Shape()
		{
			
		}
		
		virtual void show()
		{
			
		}
		
		virtual float getArea()
		{
			return -1;
		}
};

class Circle:public Shape
{
	public:
		Circle (float radius):itsRadius(radius)
		{
			
		}
		
		~Circle()
		{
			
		}
		
		float getArea()
		{
			return 3.14*itsRadius*itsRadius;
		}
		
		void show()
		{
			cout<<"����Circle��Ķ���"; 
		}
		
	private:
		float itsRadius;	
};

class Rectangle:public Shape
{
	public:
		Rectangle (float len,float width):itsLength(len),itsWidth(width)
		{
			
		}
		
		~Rectangle()
		{
			
		}
		
		virtual float getArea()
		{
			return itsLength*itsWidth;
		}
		
		virtual float getLength()
		{
			return itsLength;
		}
		
		virtual float getWidth()
		{
			return itsWidth;
		}
		
		void show()
		{
			cout<<"����Rectangle��Ķ���";
		}
		
	private:
		float itsLength;
		float itsWidth;	
};

class Square:public Rectangle
{
	public:
		Square(float len);
		~Square()
		{
			
		}
};

int main ()
{
	Shape * sp;
	
	sp=new Circle(5);
	sp->show();
	cout<<"The area of the Circle is:"<<sp->getArea()<<endl;
	delete sp;
	
	sp=new Rectangle(4,6);
	sp->show();
	cout<<"The area of the Rectangle is:"<<sp->getArea()<<endl;;
	delete sp;
	
	sp=new Square(5);
	sp->show();
	cout<<"The area of the Square is:"<<sp->getArea()<<endl;
	delete sp;
	
	return 0;
}



