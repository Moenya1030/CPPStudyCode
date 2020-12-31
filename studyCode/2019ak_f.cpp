#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int tran;
    int nm[n][n];
    int temp[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>nm[i][j];
        }
    }
    
    for (int k=0; k<m; k++)
    {
    	cin>>tran;
    	memcpy(temp, nm, sizeof(nm));
    	for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				switch(tran)
       			{
            		case 1:
                		nm[j][n-i-1] = temp[i][j];
                		break;
           		 	case 2:
                		nm[n-j-1][i]= temp[i][j];
                		break;
            		case 3:
                		nm[n-i-1][n-j-1] = temp[i][j];
               			break;
        		}
			}
		} 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
            	cout<<nm[i][j]<<" ";
			}   
            cout<<endl;
        }
        cout<<endl;
        /* code */
    }
    return 0;
}
