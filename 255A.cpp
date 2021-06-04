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
    int t,c=1,ma=0;
    cin>>t;
    int h[t+1],m[t+1];
    for(int i=1; i<=t; i++)
    {
        cin>>h[i];
        cin>>m[i];
    }
    for(int i=1; i<=t; i++)
    {
        if(h[i]==h[++i])
        {
            if(m[i]==m[++i])
            {
                c++;
            }
            else{
                if(ma<c)
                {
                    ma=c;
                    c=0;
                }
            }
        }
    }
    cout<<ma<<endl;
}
