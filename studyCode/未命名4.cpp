#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double rate;
	int n;
	double money;
	cin>>rate>>n>>money;
//	scanf("%lf%d%lf", &rate, &n, &money);
	double result =  money * rate * n;
	cout<<(double)money+result;
//	printf("%lf", money + result);
	return 0;
}

