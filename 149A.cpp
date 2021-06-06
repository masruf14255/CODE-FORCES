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
#define pf printf
#define nl pf("\n");

int main()
{
    int k,a[12],total(0);
    cin>>k;
    for(size_t i=0; i<12; ++i)
    {
        cin>>a[i];
        total+=a[i];
    }
    if(total<k)
    {
        cout<<-1<<endl;
    }
    else
    {
        sort(a,a+sizeof(a)/sizeof(a[0]), greater <int>());
        int sum=0;
        int month=0;
        while(sum<k)
        {
            sum+=a[month];
            month+=1;
        }
        cout<<month<<endl;
    }
}

