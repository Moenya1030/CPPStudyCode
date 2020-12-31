//2、建立一个程序，输入整数N，生成并输出N行N列的顺时针螺旋方阵，如下图所示:
//1     2     3     4   5
//16   17  18  19   6
//15   24  25  20  7
//14   23  22  21  8
//13   12  11   10   9
//程序命名为Lab5_2.cpp。

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int a[N][N];
	int n=0,num=1;
	for(;n<=N/2;n++) 
	{ 
		for(int j=n;j<=N-n-1;j++) 
     		a[n][j]=num++; 
     	
    	for(int i=n+1;i<N-n-1;i++) 
     		a[i][N-n-1]=num++; 
       
		for(int j=N-n-1;j>n;j--) 
     		a[N-n-1][j]=num++; 
       
    	for(int i=N-n-1;i>n;i--) 
     		a[i][n]=num++; 
   }   
   
   for(int i=0;i<N;i++) 
   { 
    	for(int j=0;j<N;j++) 
     	{
     		cout<<setw(3)<<a[i][j];
	 	}
     	cout<<endl;
   }
   return 0;
}
