//编写一个函数模板，它返回两个值中的较大者，要求能正确处理整数、浮点数、字符串三种不同类型的数据。
//程序命名为Lab11_2.cpp
#include<iostream>

using namespace std;

template<class T>

T& Compare(T& a,T& b)
{
	return a>b? a: b;
}

int main()
{
	int no=982,nt=17218;
	double dw=12.4,ds=74.33;
	string a="qweqw",b="eqweqwe";
	cout<<Compare(no,nt)<<endl;
	cout<<Compare(dw,ds)<<endl;
	cout<<Compare(a,b);
	return 0;
}
