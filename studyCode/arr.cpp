#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int x=0;
    cin>>n>>m;
	int arr[n][m];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (arr[i][j] != 0)
			{
				x++;
			}
		}
	} 
	cout<<n<<" "<<m<<" "<<x<<endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (arr[i][j] != 0)
			{
				cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
			}
		}
	} 
    return 0;
}
