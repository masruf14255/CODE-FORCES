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
	int n,k,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]>=a[k] && a[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;

}
