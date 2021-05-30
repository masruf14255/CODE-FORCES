/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=1100)
        cout<<"YES\n";
        else{
            int k= n%11;
            if(k*111<=n)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
}
