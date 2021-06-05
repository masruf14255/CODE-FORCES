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
    int flag=1;
    cin>>s;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            if(!flag)
            {
                cout<<" ";
            }continue;
        }
        else
        {
            flag=0;
            cout<<s[i];
        }
    }
    return 0;
}
