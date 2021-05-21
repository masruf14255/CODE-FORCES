/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES\n";
            cout<<a<<' '<<a*(long long)b<<' '<<a*(long long)(b+1)<<endl;
        }
    }
}
