//建立一个名为Lab7_3.cpp的程序，实现以下要求：
//a、定义一个图形类Shape，以及它的两个派生类：矩形类Rectangle和圆类Circle，两者都具有面积函数getArea( )和周长函数getRound( )
//b、定义一个正方形类Square，它是矩形类Rectangle的派生类
//c、所有函数都有一个show( )函数，显示这样一句话：“这是？？类的对象”
//最后，在main中建立各个类的对象，并尝试调用其函数。

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
			cout<<"这是Circle类的对象"; 
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
			cout<<"这是Rectangle类的对象";
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



