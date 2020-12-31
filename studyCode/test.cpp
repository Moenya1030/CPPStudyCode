#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[10001][10001]={0};
    int num=1;
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n; i++)
//        {
//            if(i%2 != 0)
//            {
//            	arr[i][n-1-j]=num;
//			}
//            else if(i%2 == 0) 
//            {
//            	arr[i][j]=num;
//			} 
//            num+=1; 
//        }
//    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
