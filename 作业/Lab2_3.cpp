//��Ʊ�дһ������ʱ����ElectronicClock�������ꡢ�¡��ա�ʱ���֡��������
//�������ʵ��ĳ�Ա������������ʱ�䡢��ʾʱ�䡣
//Ȼ����main�����н�������Ķ��󣬲����в��ԡ���������ΪLab2_3.cpp��

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
