#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int c=a1+a2+a3;
    int m=b1+b2+b3;

    n-=(c+4)/5;
    n-=(m+9)/10;

    cout<<(n<0 ?"NO":"YES");
    return 0;

}
