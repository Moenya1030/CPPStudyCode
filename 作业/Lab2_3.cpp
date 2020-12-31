//设计编写一个电子时钟类ElectronicClock，包含年、月、日、时、分、秒等属性
//并具有适当的成员函数用于设置时间、显示时间。
//然后在main（）中建立该类的对象，并进行测试。程序命名为Lab2_3.cpp。

#include <iostream>
using namespace std;

class ElectronicClock
{
	public:
		void displaytime();
		void settime();
	private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;				
};

void ElectronicClock::displaytime()
{
	cout<<year<<":"<<month<<":"<<day<<":"<<" "<<hour<<":"<<minute<<":"<<second;
}

void ElectronicClock::settime()
{
	cin>>year>>day>>hour>>minute>>second;
//	cout<<year<<":"<<month<<":"<<day<<":"<<" "<<hour<<":"<<minute<<":"<<second;	
}
int main ()
{
	ElectronicClock t1,t2;
	t1.settime();
	t1.displaytime();
	t2.settime();
	t2.displaytime();
	return 0;
}
