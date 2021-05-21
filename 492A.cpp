#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>y;
        for(i=x; i<n; i++)
        {
            if(i%x==0 && i%y!=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
}