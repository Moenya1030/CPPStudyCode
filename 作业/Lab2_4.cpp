//�������һ����Ӿ�������������ٰ�������Ӿ�ء���ͯ�ء���Χդ���������ȣ�
//���д���Ӿ���ǳ����εģ���ͯ����Բ�λ���Բ�Ρ�
//������ע��˵�������Ʒ�����Ȼ�����������˼����Ʊ�д����
//����ʱ��������ֵĳ����뾶���Լ������ֵ��ۣ�����������Ƶ���Ӿ������ۡ�

#include <iostream>
using namespace std;

const int PI=3.14; 

class pool//����Ӿ�� 
{
	public:
		double price;//���� 
		double Volume(double Long,double Wide,double High);//��� 
		double sumPrice(double volume,double price);//�ܼ� 
	private:
		friend int main();
		double Long;
		double Wide;
		double High;
};

class childPool//��ͯ�� 
{
	public:
		double price;
		double circleVolume(double radius,double high);//Բ����� 
		double ovalBolume(double a,double b,double high);//��Բ��� 
		double sumPrice(double volume,double price);//�ܼ� 
	private:
		double a;
		double b;//��Բ����Ͷ��� 
		double radius;//Բ�뾶 
		double high;//�� 
};

class fence//դ�� 
{
	public:
		double price;
		double acreage(double a,double b);//��� 
		double sumPrice(double acreage,double price);
	private:
		double a;
		double b;		 
} ;

class aisle//����
{
	public:
		double price;
		double acreage(double a,double b);//��� 
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
	aisle t3;//���ñ���
	cin>>"�������볤���">>t0.Long>>t0.Wide>>t0.High;
	cin>>"�������">>t0.price;
	cout<<"�ܼ�Ϊ"<<sumPrice(volume(t0.Long,t0.Wide,t0.High),t0.price);
	return 0;
}

//bug ̫�� ��֪����ô���� 

