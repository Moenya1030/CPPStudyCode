//有一只猴子吃一堆果子，已知每天吃昨天剩下的果子的一半再多一个，直到第10天才吃完。
//问原来这堆果子有多少个?
//请你使用递归的方法编程
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
