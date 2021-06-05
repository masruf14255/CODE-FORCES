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

    int freq[26]={0};
    /*for(int i=0; i<26; i++)
    {
        freq[i]=0;
    }*/
    for(int i=0; i<s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    //char ans='a';
    //int maxf=0;

    for(int i=0; i<26; i++)
    {
        char ans=i+'a';
        cout<<freq[i]<<" "<<ans<<endl;
    }
}



int getbit(int n, int ppos)
{
    return ((n&(1<<pos))!=0);
}

int main()
{
    cout<<getbit(5,2)<<endl;
    return 0;
}
