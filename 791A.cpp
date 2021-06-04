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
    int a,b,c=0;
    cin>>a>>b;
    while(a<=b)
    {
        c++;
        a*=3;
        b*=2;
    }
    cout<<c<<endl;
}
