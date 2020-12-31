#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x,y;
    while (cin>>x>>y)
    {
        if (x < 0)
            cout<<"NO"<<endl;
        else
        {
            double num = pow(x, y);
            int var1 = (int)num;
            double var2 = num-var1;
            printf("%d %lf\n", var1, var2);
        }
    }
    return 0;
}
