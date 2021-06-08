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


int n,i;
string pos[]={
    "Sheldon","Leonard","Penny","Rajesh","Howard"
};
int main()
{
    cin>>n;
    n--;
    while(n>=5)
    {
        n-=5;
        n/=2;

    }
    cout<<pos[n]<<endl;
}
