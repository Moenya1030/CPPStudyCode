// ����һ����ΪLab12_1����Ŀ�����P395ϰ��9.1��

#include <iostream>
#include <iomanip>
#include "array.h"

using namespace std;

int main()
{
	int n;
	double average,total=0;
	cin>>n;
	Arrat<float> score(n);
	for (int i=0;i<n;i++)
	{
		cin>>score[i];
		total+=score[i]; 
	}
	average=total/n;
	cout<<"average="<<setprecision(4)<<average<<endl;
	return 0;
}

