// �ο����Ľ�P362��9-2��ʵ������Ҫ��:
//a�������ṹ��Stuent������ѧ�š��������Ա��������
//b�������ṹ��Book���������������ߡ������硢�۸��������
//c������һ��ģ����Store�������ʵ��ĳ�Ա������
//d����main�н�������Store��Ķ���s1���洢������Ϊĳ��ѧ������Ϣ��Ȼ�����
//e����main�н�������Store��Ķ���b1���洢������Ϊĳ��ͼ�����Ϣ��Ȼ�����

#include<bits/stdc++.h>

using namespace std;

struct Student
{
	int id;
	string name,sex;
};

struct Book
{
	string bookname,author,press;
	double price;
};

template<class T>

class Store
{
	private:
		T item;
		bool haveValue;
		
	public:
		Store();
		T& getElem();
		void putElem(const T &x);
};

template<class T>

Store<T>::Store():haveValue(false){}

template<class T>

T& Store<T>::getElem()
{
	if(!haveValue)
	{
		cout<<"No item present!"<<endl;
		exit(1);
	}
	return item;
}

template<class T>

void Store<T>::putElem(const T &x)
{
	haveValue=true;
	item=x;
}

int main()
{
	Student g={104,"����","��"};
	Store<Student>s1;
	s1.putElem(g);	
	Book bk={"gfh","gxd","eeeee",34};
	Store<Book>b1;
	b1.putElem(bk);
	cout<<"Student of id: "<<s1.getElem().id<<endl;
	cout<<"Student of name: "<<s1.getElem().name<<endl;
	cout<<"Student of sex: "<<s1.getElem().sex<<endl;	
	cout<<"Book of name:"<<b1.getElem().bookname<<endl;
	cout<<"Book of author: "<<b1.getElem().author<<endl;
	cout<<"Book of press: "<<b1.getElem().press<<endl;
	cout<<"Book of price: "<<b1.getElem().price;	
	return 0;
}
