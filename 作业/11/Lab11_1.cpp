// 参考并改进P362例9-2，实现以下要求:
//a、建立结构体Stuent，具有学号、姓名、性别等数据项
//b、建立结构体Book，具有书名、作者、出版社、价格等数据项
//c、建立一个模板类Store，具有适当的成员及方法
//d、在main中建立对象Store类的对象s1，存储的数据为某个学生的信息，然后输出
//e、在main中建立对象Store类的对象b1，存储的数据为某本图书的信息，然后输出

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
	Student g={104,"张三","男"};
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
