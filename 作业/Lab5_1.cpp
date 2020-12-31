//建立一个程序，输入N个学生的M门课程成绩，然后统计各门课的最高分、平均分。
//程序命名为Lab5_1.cpp。
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int N,M;
	cin>>N>>M;
	double grade[N][M];
	for (int i=0;i<M;i++)
	{
		for (int j=0;j<M;j++)
		{
			cin>>grade[i][j];
		}
	}
	double max[110]={0},ave[110]={0},sum[110]={0};
	for(int j=0;j<M;j++)
	{
		for(int i=0;i<N;i++)
		{
			if(grade[i][j]>=max[i])
			{ 
				max[i]=grade[i][j];
			} 
		}
	}
	
	for(int k=0;k<M;k++)
	{ 
		for(int i=0;i<N;i++)
		{ 
			sum[k] += grade[i][k];
		}
	}
	 
	for(int j=0;j<M;j++)
	{
		ave[j]=sum[j]/N;
	}	
	cout<<endl;
	for(int k=0;k<M;k++)
	{
		cout<<"课程"<<k+1<<"平均分为:"<<ave[k]<<",最高分为:"<<max[k]<<endl;
	}
	return 	0; 
}


	
