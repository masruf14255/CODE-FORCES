#include<bits/stdc++.h>
using namespace std;


long long int mod(long int a, long int b,long int m)
{
	if(b==0)return 1;

	if(b%2==0)
	{
		long int x=mod(a,b/2,m);
		return (x*x)%m;
	}
	else return ((long int)a%m*mod(a,b-1,m))%m;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,m;
		cin>>a>>b>>m;
		mod(a,b,m);
		printf("%lld\n",mod(a,b,m));
	}
}
