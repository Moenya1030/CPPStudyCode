// ʹ�õڰ��µ��麯������̬�󶨵�֪ʶ��ʵ������Ҫ��:
//a������һ��������Animal������һ���麯��shout��������ʾ���֡������С���
//b��������Animal�Ķ��������Dog��Cat��Sheep�����ǵ�shout���������ֱ���ʾ���֡�С��������������Сè������������С�������㡱
//c����main�зֱ���4����Ķ���,�洢��һ��Animal�����ָ������Arr֮��
//d��ʹ��forѭ������������ÿ�������shout����������

#include<iostream>

using namespace std;

class Animal{
	public:
		virtual void shout()
		{
			cout<<"������"<<endl;
		}
};

class Dog:public Animal
{
	public:
		void shout()
		{
			cout<<"С��������"<<endl;
		}
};

class Cat:public Animal
{
	public:
		void shout()
		{
			cout<<"Сè������"<<endl;
		}
};

class Sheep:public Animal
{
	public:
		void shout()
		{
			cout<<"С��������"<<endl;
		}
};

int main()
{
	Animal a;
	Dog d;
	Cat c;
	Sheep s;
	Animal* Arr[]={&a,&d,&c,&s};
	
	const int n=sizeof(Arr)/sizeof(Animal*);
	
	for(int i=0;i<n;i++)
	{
		Arr[i]->shout();
	}
	return 0;
}
