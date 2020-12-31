#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	int maxx=0;
	for(int i=0; i<sizeof(arr) / sizeof(arr[0]); i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]>maxx)
		{
			maxx=arr[i];
		}		
	}
	for(int i=0; i<sizeof(arr) / sizeof(arr[0]); i++)
	{
		if(arr[i] < max)
		{
			cout<<max<<endl;
		}
		else if(arr[i] == max)
		{
			cout<<maxx<<endl;
		}
		
	}
	return 0;
}
