#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    long long a,b;
	cin>>k>>a>>b;
    int arr[k]={0};
    int num=k;
    while(num--)
    {
        if(a+b > k-1)
        {
            a=a+b-k;
        }
        else
        {
        	a+=b;
		}
        arr[a]=1;
    }
    for(int i=0; i<k; i++)
        if(!arr[i])
        {
            cout<<"No";
            return 0;
        }
    cout<<"Yes";  
    return 0;
}
