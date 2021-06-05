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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>
    c>>d>>p>>nl>>np;
    cout<<min(min(k*l/nl,c*d),p/np)/n<<endl;
    return 0;
}
