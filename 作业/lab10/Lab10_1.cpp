//����һ����ΪLab10_1.cpp�� ����ʵ������Ҫ��
//a������һ����ΪMatrix�ľ����࣬�洢һ����άdouble���飬�Լ�����������������ȡ�
//b��ͨ�����������+��ʵ��������ͬ���������֮��ĵ�+���㣬������C=A+B
//c��ͨ�����������<<��ʹ�ÿ���ͨ��������������ʾ��������cout<<C����ʾ����C������

#include<iostream>
#include<string.h>

using namespace std;

class Matrix;

ostream& operator<<(ostream &out,const Matrix &m);

class Matrix
{
	public:
		Matrix(int r=0,int c=0);
		void setMatrix(int r=0,int c=0);
		Matrix operator+(const Matrix &m) const;
		friend ostream& operator<<(ostream &out,const Matrix &m);
	
	private:
		double elements[100][100];
		int row,col;                                   
};

Matrix::Matrix(int r,int c):row(r),col(c)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{ 
			cin>>elements[i][j];
		} 
	}
}

void Matrix::setMatrix(int r,int c)
{
	row=r;
	col=c;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>elements[i][j];
		}	
	}
}

Matrix Matrix::operator+(const Matrix &m) const
{
	Matrix m1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			m1.elements[i][j]=elements[i][j]+m.elements[i][j];
		}	
	}
	m1.row=row;
	m1.col=col;
	return m1;
}

ostream& operator<<(ostream &out,const Matrix &m)
{
	int i,j;
	for(i=0;i<m.row;i++)
	{
		for(j=0;j<m.col;j++)
		{
			out<<m.elements[i][j]<<" ";
		}
		out<<endl;
	}
	return out;
}

int main()
{
	Matrix m1(4,5),m2(4,5);
	cout<<"\nm1+m2:\n"<<m1+m2<<endl;
	return 0;
}

