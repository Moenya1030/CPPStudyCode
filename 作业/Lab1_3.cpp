//�������ʮ��������ת������Ӧ�Ķ�������
#include <iostream>
using namespace std;

void tran(int num)
{
	if (num/2)
		tran(num/2);
	cout<<num%2;
}

int main ()
{
	int num;
	cin>>num;
	tran(num);
	return 0;
}
