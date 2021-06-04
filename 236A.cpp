/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }

}
