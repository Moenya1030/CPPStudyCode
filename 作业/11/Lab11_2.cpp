//��дһ������ģ�壬����������ֵ�еĽϴ��ߣ�Ҫ������ȷ�������������������ַ������ֲ�ͬ���͵����ݡ�
//��������ΪLab11_2.cpp
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
