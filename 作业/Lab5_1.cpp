//����һ����������N��ѧ����M�ſγ̳ɼ���Ȼ��ͳ�Ƹ��ſε���߷֡�ƽ���֡�
//��������ΪLab5_1.cpp��
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
		cout<<"�γ�"<<k+1<<"ƽ����Ϊ:"<<ave[k]<<",��߷�Ϊ:"<<max[k]<<endl;
	}
	return 	0; 
}


	
