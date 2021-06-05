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
    string s;
    cin>>s;
    int up(0),low(0);
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            up+=1;
        }
        else{
            low+=1;
        }
    }
    if(up>low)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
}
