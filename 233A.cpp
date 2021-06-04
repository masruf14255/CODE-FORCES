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
    string a[3];
    int c=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+3);
    for(int i=0; i<4; i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
