#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		cin>>y>>x;
		if (x<=y)
		{
			if (y%2==0)
				cout<<((y*y)-(x-1))<<endl;
			else
				cout<<((((y-1)*(y-1))+1)+(x-1))<<endl;
		}
		else
		{
			if(x%2==0)
				cout<<((((x-1)*(x-1))+1)+(y-1))<<endl;
			else
				cout<<((x*x)-(y-1))<<endl;
		}
	}
}