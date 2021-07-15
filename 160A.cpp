#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,cnt,ans;
    while(cin>>n)
    {
        long long a[n];
        sum=0;
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum/=2;
        cnt=0;
        ans=0;
        sort(a,a+n);
        for(int i=n-1; i>=0; --i)
        {
            ans+=a[i];
            cnt++;
            if(ans>sum)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
