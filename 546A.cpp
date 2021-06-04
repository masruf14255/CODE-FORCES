/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,d,b,sum=0,ans=0;
    cin>>k>>d>>b;
    for(ll i=0; i<=b; i++)
    {
        sum+=i;
    }
    ans=(sum*k)-d;
    if(ans<0)
    {
        cout<<0;
    }
    else
    {
        cout<<ans<<endl;
    }

}
