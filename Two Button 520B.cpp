#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    if(m<n)
    {
        cout<<n-m<<endl;
        return 0;
    }
    while(n<m)//4,6
    {
        if(m%2==0) m/=2;//3,2,0
        else m++;//4
        c++;//1,2,3,4
    }
    cout<<c+n-m<<endl;//4+4-6
    return 0;
}
