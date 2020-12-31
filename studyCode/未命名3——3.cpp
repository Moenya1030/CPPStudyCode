#include <bits/stdc++.h>
using namespace std;

int fun(int i, int j, int k)//i表示当前位置，j表示要去的位置，k为周长
{
	if(j<i)
		return 1;
	else
	{
		int i_k_j = i-k+j;//逆时针
		int i_j = j-i;//顺时针
		if(i_k_j > i_j)
			return 1;
		else
			return 0;
	}
}//如果顺时针走比逆时针走近，就返回1

int main()
{
	int k,n;
	cin>>k>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int min=k;
	for(int i=0; i<n; i++)
	{
		int dis=0;//距离
		for(int j=0; j<n; j++)
		{
			if(fun(arr[i], arr[j], k))
			{
				dis+=(j-i);
			}
			else
			{
				dis+=(i-k+j);
			}
		}
		if(dis<min)
			min=dis;
	}
	cout<<min;
	return 0;
}
