#include<iostream>
using namespace std;

int main()
{
	int i,k,a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"ѭ���ƶ�ǰ:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	int temp=0;
	for (int i=0;i<10;i++)
	{
		temp=a[i];
		a[i]=a[9-i];
		a[9-i]=temp;
	}//�����鷴��
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
