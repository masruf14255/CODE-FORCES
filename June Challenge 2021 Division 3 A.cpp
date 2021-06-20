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
typedef pair<int, int> PII;

//#define sc scanf
#define pf printf
#define nl pf("\n")
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))
#define fr(i,n)      for (ll i=0;i<n;i++)
#define fr1(i,n)     for(ll i=1;i<=n;i++)
#define pfl(x)       printf("%lld\n",x)
#define endl        "\n"
#define pb         push_back
#define asort(a)   sort(a,a+n)
#define dsort(a)   sort(a,a+n,greater<int>())
#define vasort(v)  sort(v.begin(), v.end());
#define vdsort(v)  sort(v.begin(), v.end(),greater<int>());
const int N = 2e5 + 10;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,x1,y,y1,z,z1;
        cin>>x>>x1>>y>>y1>>z>>z1;

        if(x1>=x && y1>=y && z1<=z)
        {
            cout<<"YES\n"<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
