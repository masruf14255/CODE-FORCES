/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1001];
		cin>>s;
		int l=strlen(s);
		if(l<=10)
		{
			cout<<s<<"\n";
		}
		else
		{
			cout<<s[0]<<l-2<<s[l-1]<<endl;
		}
	}

}
