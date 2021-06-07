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

#define sc scanf;
#define pf printf;
#define nl pf("\n");
#define io ios::sync_with_stdio(false);
using namespace std;
int main()
{
    io
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n-max(a+1,n-b)+1<<endl;
}

