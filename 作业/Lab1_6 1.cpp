//有1000金币，每次可投100个金币买大或买小。
//如果猜对了，可得本金及奖励共计180金币，如果猜错了每次损失100金。
//测试时投币10次，每次选择big或small，看看你最后剩下多少金币。
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
using namespace std;

int main ()
{
	int num[10],number,a[10];
	int pri=1000;
	char choice[10],ans;
	
	for (int i=0;i<=9;i++)
	{
		cin>>choice[i];
	}
	
	for (int i=0;i<=9;i++)
	{
		srand((unsigned) time(NULL)); //用时间做种，每次产生随机数不一样
		number = rand() % 101; //产生0-100的随机数
		for(int i=0;i<10;i++)                    //产生10个随机数
    	{
			num[i]=1+rand()%10;                //得到随机数(范围在1-10之间)
     		for(int j=0;j<i;j++) 
			{
         		if(num[i]==num[j]) 
				{
					i--;
					break;
				}  //如果重复,重新产生随机数
			}
		}
		cout<<num[i]<<" ";
    }
    
		
	
	
	for (int i=0;i<=9;i++)
	{
		if (num[i]>=50)
		{
			ans='b';
		}
		else
			ans='s';
			
		if (choice[i]==ans)
		{
			pri+=180;
		}
		else
			pri-=100;
	}
	
	cout<<endl<<pri;
	return 0;
}
