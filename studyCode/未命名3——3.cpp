#include <bits/stdc++.h>
using namespace std;

int fun(int i, int j, int k)//i��ʾ��ǰλ�ã�j��ʾҪȥ��λ�ã�kΪ�ܳ�
{
	if(j<i)
		return 1;
	else
	{
		int i_k_j = i-k+j;//��ʱ��
		int i_j = j-i;//˳ʱ��
		if(i_k_j > i_j)
			return 1;
		else
			return 0;
	}
}//���˳ʱ���߱���ʱ���߽����ͷ���1

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
		int dis=0;//����
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
