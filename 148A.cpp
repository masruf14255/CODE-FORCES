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

#define sc scanf
#define pf printf
#define nl pf("\n")

int main()
{
    int k,l,m,n,d;
    int cnt=0;

    cin>>k>>l>>m>>n>>d;
    cnt=d;

    if(k==1 || l==1 || m==1 || n==1)
    {
        cout<<d<<endl;
    }
    else
    {
        for(int i=1; i<=d; i++)
        {
            if((i%k!=0) && (i%l!=0) && (i%m!=0) && (i%n!=0))
                cnt--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
