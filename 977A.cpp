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
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
}
