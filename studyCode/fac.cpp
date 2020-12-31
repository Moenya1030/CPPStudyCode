#include <bits/stdc++.h>
using namespace std;

long long fac(int n)
{
    if (n==1 || n==0)
        return 1;
    return n*fac(n-1);
}

int main()
{
    int n;
    while(cin>>n)
    {
        long long facN = fac(n);
        int num=0;
        for (int i=10; i<1e9; i*=10)
        {
            if (facN%i == 0)
                num++;
            else
                break;
        }
        cout<<num<<endl;
        num=0;
    }
    return 0;
}
