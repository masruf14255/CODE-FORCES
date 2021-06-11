/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;

#define MAX 1000000001
#define MOD 1000000007
#define sc scanf
#define pf printf
#define nl pf("\n")
#define rep(i, n) for (int i = 0; i < n; ++i)
const int N = 2e5 + 10;
typedef pair<int, int> PII;
typedef long long ll;
int n;
ll a[N];


int main()
{
    int n,p,hi,low,wow=0;
    cin>>n;
    cin>>low;
    hi=low;
    while(--n)
    {
        cin>>p;
        if(low>p)
        {
            wow++;
            low=p;
        }
        else if(hi<p)
        {
            wow++;
            hi=p;
        }
    }
    cout<<wow<<endl;

}
