#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int cnt=0;
	int arr[n]={0};
	int last;//找完所有连续区间后再对剩余所有元素变为一个数组再找连续区间
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int flag = 1;
	int cnt_up=1;
	int cnt_down = 1;
	for(int i=0; i<n; i++)
	{
		if(!arr[i])
		{
			for(int j=i+1; j<n; j++)
			{
				if(arr[i] > arr[j])//降序
				{
					cnt_down++;
					arr[j]=0;
				}
				else if (arr[i] < arr[j])
				{
					cnt_up++;
					arr[j]=0;
				}
				else
				{
					cnt++;
				}
			}
		}
		
	}

	last = n-cnt_down-cnt_up;
	cout<<last;
	while(last>1)
	{
		cnt-=last;
		int last1[last];
		int n_last=0;
		for(int i=0; i<n; i++)
		{
			if(!arr[i])
			{
				last1[n_last]=arr[i];
				n_last++;
			}
		}
		int cnt_up_1=1;
		int cnt_down_1 = 1;
		for(int i=0; i<last; n++)
		{
			for(int j=i; j<last; j++)
			{
				if(arr[i] > arr[j])//降序
				{
					cnt_down_1++;
					arr[j]=0;
				}
				else if (arr[i] < arr[j])
				{
					cnt_up_1++;
					arr[j]=0;
				}
				else
				{
					cnt++;
				}
			}
		}
		last -= (cnt_down_1+cnt_up_1);
	}
	
	cout<<cnt;
	return 0;
}
