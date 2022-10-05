#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	long long int x=1;
	while (n--)
	{
		x=(x*2);
		x=x%1000000007;
	}
	cout<<x;
}