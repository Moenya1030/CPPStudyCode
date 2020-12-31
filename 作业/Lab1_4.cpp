//卡牌游戏:随机抽出了 N 张卡片，数出这 N 张卡片上每种数字（长度1到5位之间）各出现了多少次。
//例如，有5张卡片:15、22、17、82、5。 
//就会输出: 1  2 2  3 5  2 7  1 8  1
 //现在我们为了更直观表示各个数字的多少，如果某个数字出现K次，就打印K个此数字。
 //上面的例子输出为: 11 222 55 7 8。
 
 #include <iostream>
 using namespace std;
 
 int main ()
 {
 	int N,num[9]={0};//num数组存储各数出现的次数 
 	cin>>N;
 	int a[N],b[N];
 	
	 for (int t=0;t<N;t++)
 	{
 		cin>>a[t];
 		b[t]=a[t];
	}
 	
	for (int n=0;n<N;n++)
 	{
 		while(b[n]>0)
        {
            num[b[n]%10]++;
            b[n]=b[n]/10;
        }
	}
	
	for (int k=0;k<=9;k++)
	{
		if (num[k]>0)
		{
			for (num[k];num[k]>0;num[k]--)
			{
				cout<<k;
			}
			cout<<" ";
		}
		
	}
 	return 0;
 }
