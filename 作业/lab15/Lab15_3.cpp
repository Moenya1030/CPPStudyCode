//建立一个程序，建立一个自己的异常类，用于对两个100以内两个浮点数相除的异常处理。要求将异常分成除零溢出、数值越界两种。
#include<iostream>
#include<string>
using namespace std;

class MyException{
	public:
		MyException(const string &message):message(message){}
		~MyException(){}
		const string &getMessage() const {return message;}
	private:
		string message;
};

void divide(double a,double b)
{
	if(a>=100||b>=100)
	{
		throw MyException("两个数至少有一个超过或等于100！");
	}	
	if(b==0)
	{
		throw MyException("除数不能为零！");
	}	
	double c=a/b;
	cout<<c;
}

int main()
{
	double a,b;
	cout<<"请输入两个100以内的浮点数："<<endl;
	cin>>a>>b;
	try
	{
		divide(a,b);
	}
	catch(MyException &e)
	{
		cout<<e.getMessage()<<endl;
	}
	return 0;
}
