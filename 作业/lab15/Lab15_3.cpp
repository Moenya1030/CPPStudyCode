//����һ�����򣬽���һ���Լ����쳣�࣬���ڶ�����100��������������������쳣����Ҫ���쳣�ֳɳ����������ֵԽ�����֡�
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
		throw MyException("������������һ�����������100��");
	}	
	if(b==0)
	{
		throw MyException("��������Ϊ�㣡");
	}	
	double c=a/b;
	cout<<c;
}

int main()
{
	double a,b;
	cout<<"����������100���ڵĸ�������"<<endl;
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
