//��1000��ң�ÿ�ο�Ͷ100�����������С��
//����¶��ˣ��ɵñ��𼰽�������180��ң�����´���ÿ����ʧ100��
//����ʱͶ��10�Σ�ÿ��ѡ��big��small�����������ʣ�¶��ٽ�ҡ�
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
		srand((unsigned) time(NULL)); //��ʱ�����֣�ÿ�β����������һ��
		number = rand() % 101; //����0-100�������
		for(int i=0;i<10;i++)                    //����10�������
    	{
			num[i]=1+rand()%10;                //�õ������(��Χ��1-10֮��)
     		for(int j=0;j<i;j++) 
			{
         		if(num[i]==num[j]) 
				{
					i--;
					break;
				}  //����ظ�,���²��������
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
