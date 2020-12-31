#include <iostream>
using namespace std;

const float PI=3.141593;
const float FENCE_PRICE=35;
const float CONCRETE_PRICE=20;

class Circle
{
	public :
		Circle(float r);
		float circumference();
		float area();
	private:
		float radius;
};

//类的实现
//构造函数初始化数据成员radius
Circle::Circle(float r)
{
	radius=r;
} 

//计算圆的周长
float Circle::circumference()
{
	return 2*PI*radius;
}
 
//计算圆的面积
float Circle::area()
{
	return PI*radius*radius;
} 

int main ()
{
	float radius;
	cout<<"Enter the radius of the pool: ";//提示用户输入半径
	cin>>radius;
	Circle pool(radius);//游泳池边界对象 
	Circle poolRim(radius+3);//栅栏对象 
	
	//计算栅栏造价并输出
	float fenceCost=poolRim.circumference()*FENCE_PRICE;
	cout<<"Fencing Cost is "<<fenceCost<<endl;
	
	//计算过道造价并输出
	float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE; 
	cout<<"Concrete Cost is "<<concreteCost<<endl;
	return 0;
 } 
