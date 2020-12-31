#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long h,n;
	cin>>h>>n;
	long long h_h = h;
	int arr[n];
	int flag=0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		h_h -= arr[i];
		if(h_h <= 0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
