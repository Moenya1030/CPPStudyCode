//立一个名为Lab11_3的项目，用于创建并应用Array类。
//项目包含Array.h、main.cpp两个文件。
//其中，Array类的定义与实现可参考P355例9-3，Array类的应用可参考P362例9-4。

#include<iostream>
#include<iomanip>
#include"Array.h"

using namespace std;

int main(){
	Array<int>a(10);
	int count=0;	
	int n;
	cout<<"Enter a value>=2 as upper limit for prime numbers:";
	cin>>n;	
	for(int i=2;i<=n;i++)
	{
		bool isPrime=true;
		for(int j=0;j<count;j++)
		{
			if(i%a[j]==0)
			{
				isPrime=false;
				break;
			}
		}
		
		if(isPrime)
		{
			if(count==a.getSize())
			 a.resize(count*2);
			a[count++]=i;
		}
	}
	
	for(int i=0;i<count;i++)
	{
		cout<<setw(8)<<a[i];
		if((i+1)%10==0)
		{
			cout<<endl;
		}	 
	}
	return 0;
}
