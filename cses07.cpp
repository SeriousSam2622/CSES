#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int i;
	cin>>i;
	for (long long int n=1; n<=i; n++)
		cout<<((n*n)*(n*n-1)/2)-(4*(n-1)*(n-2))<<endl;
}