// 使用第八章的虚函数、动态绑定等知识，实现以下要求:
//a、建立一个动物类Animal，具有一个虚函数shout（），显示文字“动物会叫”。
//b、建立出Animal的多个派生类Dog、Cat、Sheep，他们的shout（）函数分别显示文字“小狗汪汪汪”，“小猫喵喵喵”，“小羊咩咩咩”
//c、在main中分别建立4个类的对象,存储到一个Animal类对象指针数组Arr之中
//d、使用for循环遍历并调用每个对象的shout（）函数。

#include<iostream>

using namespace std;

class Animal{
	public:
		virtual void shout()
		{
			cout<<"动物会叫"<<endl;
		}
};

class Dog:public Animal
{
	public:
		void shout()
		{
			cout<<"小狗汪汪汪"<<endl;
		}
};

class Cat:public Animal
{
	public:
		void shout()
		{
			cout<<"小猫喵喵喵"<<endl;
		}
};

class Sheep:public Animal
{
	public:
		void shout()
		{
			cout<<"小羊咩咩咩"<<endl;
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
