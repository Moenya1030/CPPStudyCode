//��һֻ���ӳ�һ�ѹ��ӣ���֪ÿ�������ʣ�µĹ��ӵ�һ���ٶ�һ����ֱ����10��ų��ꡣ
//��ԭ����ѹ����ж��ٸ�?
//����ʹ�õݹ�ķ������
#include <iostream>
using namespace std;

int fac(int n)
{ 
	if(n==0) 
		return 0; 
	return 2*(fac(n-1)+1); 
} 

int main()
{ 
	cout<<fac(10); 
	return 0; 
}
