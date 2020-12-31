//请你设计一个游泳场所，里面至少包含大游泳池、儿童池、外围栅栏、过道等，
//其中大游泳池是长方形的，儿童池是圆形或椭圆形。
//请你用注释说明你的设计方案，然后用面向对象思想设计编写程序。
//测试时输入各部分的长宽或半径，以及各部分单价，计算你所设计的游泳场所造价。

#include <iostream>
using namespace std;

const int PI=3.14; 

class pool//大游泳池 
{
	public:
		double price;//单价 
		double Volume(double Long,double Wide,double High);//体积 
		double sumPrice(double volume,double price);//总价 
	private:
		friend int main();
		double Long;
		double Wide;
		double High;
};

class childPool//儿童池 
{
	public:
		double price;
		double circleVolume(double radius,double high);//圆柱体积 
		double ovalBolume(double a,double b,double high);//椭圆体积 
		double sumPrice(double volume,double price);//总价 
	private:
		double a;
		double b;//椭圆长轴和短轴 
		double radius;//圆半径 
		double high;//高 
};

class fence//栅栏 
{
	public:
		double price;
		double acreage(double a,double b);//面积 
		double sumPrice(double acreage,double price);
	private:
		double a;
		double b;		 
} ;

class aisle//过道
{
	public:
		double price;
		double acreage(double a,double b);//面积 
		double sumPrice(double acreage,double price);
	private:
		double a;
		double b; 
} ;

double pool::Volume(double Long,double Wide,double High)
{
	return Long*Wide*High; 
}

double pool::sumPrice(double volume,double price)
{
	return volume*price;
}

double childPool::circleVolume(double radius,double high)
{
	return PI*radius*radius*high;
}

double childPool::ovalBolume(double a,double b,double high)
{
	return PI*a*b*high;
}

double childPool::sumPrice(double volume,double price)
{
	return volume*price;
}

double fence::acreage(double a,double b)
{
	return a*b;
}

double fence::sumPrice(double acreage,double price)
{
	return acreage*price;
}

double aisle::acreage(double a,double b)
{
	return a*b;
}

double aisle::sumPrice(double acreage,double price)
{
	return acreage*price;
}

int main ()
{
	pool t0;
	childPool t1;
	fence t2;
	aisle t3;//设置变量
	cin>>"依次输入长宽高">>t0.Long>>t0.Wide>>t0.High;
	cin>>"输入造价">>t0.price;
	cout<<"总价为"<<sumPrice(volume(t0.Long,t0.Wide,t0.High),t0.price);
	return 0;
}

//bug 太多 不知道怎么改了 

