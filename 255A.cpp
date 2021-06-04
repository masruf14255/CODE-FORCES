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
    int ar[26];
    int ch=0,bi=0,ba=0,t,a=1,b=2,c=3,ans=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>ar[i];
        if(i==a)
        {
            ch+=ar[i];
            a+=3;
        }
        else if(i==b)
        {
            bi+=ar[i];
            b+=3;
        }
        else if(i==c)
        {
            ba+=ar[i];
            c+=3;
        }
    }
    ans=max(ch,max(bi,ba));
    if(ans==ch)
    {
        cout<<"chest\n";
    }
    else if(ans==bi)
    {
        cout<<"biceps\n";
    }
    else
    {
        cout<<"back\n";
    }
}
