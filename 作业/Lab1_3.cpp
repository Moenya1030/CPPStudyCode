//把输入的十进制整数转换成相应的二进制数
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
