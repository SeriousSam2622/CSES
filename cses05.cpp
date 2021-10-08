#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int n;
	cin>>n;
	long long int a[n];
	if (n==2||n==3)
		cout<<"NO SOLUTION";
	else if (n==1)
		cout<<1;
	else if (n==4)
		cout<<"2 4 1 3";
	else
	{
		if (n%2==0)
		{
			long long int c=1;
			for (long long int i=0; i<n; i=i+2)
			{
				a[i]=c;
				c++;
			}
			for (long long int i=1;i<n; i=i+2)
			{
				a[i]=c;
				c++;
			}
		}
		else
		{
			long long int c=2;
			a[n/2]=1;
			for (long long int i=0; i<n/2; i++)
			{
				a[i]=c;
				c=c+2;
			}
			long long int d=n;
			for (long long int i=(n/2)+1; i<n; i++)
			{
				a[i]=d;
				d=d-2;
			}
		}
		for (long long int i=0; i<n; i++)
			cout<<a[i]<<" ";
	}
}