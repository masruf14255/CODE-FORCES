/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double n,sum,ans;
int main()
{
    double t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        sum+=n;
    }
    ans=sum/t;
    cout<<ans<<endl;
}
