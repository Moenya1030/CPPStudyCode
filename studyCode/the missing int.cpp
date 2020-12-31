#include <bits/stdc++.h>
#define fuck 9
using namespace std;
int main()
{
	int num[fuck];
	for(int i=1; i<=9; i++)
		cin>>num[i];
	int s=55;
	for(int b=1; b<=9; b++)
		s-=num[b];
	cout<<"The missing integer is:"<<s;
	return 0;
}
