#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	long long int sum=0;
	cin>>n;
	for (int i=1; i<=n; i++)
		sum+=i;
	if (sum%2==0)
	{
		long long int x=sum/2,s=0,c;
		for (int i=1; i<n; i++)
		{
			s+=i;
			if (s>=x)
			{
				c=i;
				break;
			}
		}
		if (s==x)
		{
			cout<<"YES"<<endl;
			cout<<c<<endl;
			int z=c;
			while (c--)
				cout<<c+1<<" ";
			cout<<endl;
			cout<<n-z<<endl;
			int y= n-z;
			while (y--)
				cout<<z+y+1<<" ";
		}
		else
		{
			int y=s-x;
			int z=c;
			if (y<c)
			{
				cout<<"YES"<<endl;
				cout<<c-1<<endl;
				while (c--)
				{
					if (c+1==y)
						continue;
					else
						cout<<c+1<<" ";
				}
				cout<<endl;
				cout<<n-z+1<<endl;
				cout<<y<<" ";
				int o= n-z;
				while (o--)
					cout<<z+o+1<<" ";
			}
			else
				cout<<"NO";
		}
	}
	else 
		cout<<"NO";
}