#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int Max = 10;
void Creat(int r[ ], int n);
void InsertSort(int r[ ], int n);
void ShellSort(int r[ ], int n);

void Creat(int r[ ], int n)
{
	int i = 0;
	srand(time(NULL));
	for (i = 1; i <= n; i++)
		r[i] = 1 + rand() % 100;
}

void InsertSort(int r[ ], int n)
{
	int i, j, temp;
	for(int i=0; i<n; i++)
	{
		temp = r[i];
		for(j=i-1; j>0 && temp < r[j]; j--)
			r[j+1] = r[j];
		r[j+1] = temp;
	}
}

int main( )
{
	int a[Max + 1] = {0}, b[Max + 1] = {0};
	int i = 0;
	Creat(a, Max);
	for (i = 1; i <= Max; i++)
		b[i] = a[i];
	cout<<"�����������У�";
    for (i = 1; i <= Max; i++)
		cout<<b[i]<<"  ";
	cout<<endl;
	InsertSort(b, Max);
	cout<<"ִ��ֱ�Ӳ��������Ԫ��Ϊ��";
	for (i = 1; i <= Max; i++)
		cout<<b[i]<<"  ";
	cout<<endl;
	cout<<"�����������У�";
    for (i = 1; i <= Max; i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	ShellSort(a, Max);
	cout<<"ִ��ϣ�������Ԫ��Ϊ��";
	for (i = 1; i <= Max; i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	return 0;
}






