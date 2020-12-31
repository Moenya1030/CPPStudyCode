//1、参考P220、221例6-16、6-17，实现动态对象数组的创建和使用。
//要求如下:
//a、建立一个圆类Circle，具有以下三个数据成员:坐标x、y，半径r。
//b、具有适当的构造、析构函数，以及显示圆数据的函数show（）。
//c、在main中建立对象数组，存储多个圆的数据，然后进行测试。
//输出格式如下:
//……
//圆(1,1)  半径=5
//圆(7,12) 半径=10
#include <bits/stdc++.h> 

using namespace std;

class circle
{
	public:
		circle(int x1=0,int y1=0,int r1=0)
		{
			x=x1;
			y=y1;
			r=r1;
		}
		void show()
		{
			cout<<"圆("<<x<<","<<y<<")"<<"  "<<"半径="<<r<<endl; 
		}
		void set (int x2,int y2,int r2)
		{
			x=x2;
			y=y2;
			r=r2;
		}
		~circle()
		{
			
		}
	private:
		int x;
		int y;
		int r;
};

int main()
{
	int n=3,a,b,c;
	circle d[3];
	for (int i=0;i<n;i++)
	{
		cin>>a>>b>>c; 
		c[i].set(a,b,c);
	}
	for (int i=0;i<n;i++)
	{
		c[i].show();
	}
	return 0;
}
