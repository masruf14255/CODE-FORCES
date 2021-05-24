/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(b>=a)
        {
            ans=b;
        }
        else if(c<=d)
        {
            ans=-1;
        }
        else
        {
            a-=b;
            ans=b+((a+c-d-1)/(c-d)*c);
        }
        cout<<ans<<endl;
    }
}

