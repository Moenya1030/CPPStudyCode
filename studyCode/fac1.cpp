#include<bits/stdc++.h>
using namespace std; 

int cal(int n)
{
	if(n<5) return 0;
	else
	{
		n/=5;	
        return n+cal(n);
	}
}

int main()
{
    int T;
    while (cin>>T)
    {
        cout<<cal(T)<<endl;
        /* code */
    }
    
    // while(T--)
    // {
 	//     cin>>n;
	//     cout<<cal(n)<<endl;
    // }
    return 0;
}
