#include <bits/stdc++.h>

using namespace std;

int t,n;
string s;
map<string, int> m;

string solve()
{
    for(char i='a'; i<='z'; i++)
    {
        string aux;
        aux+=i;

        if(!m[aux])
            return aux;
    }

    for(char i='a'; i<='z'; i++)
        for(char j='a'; j<='z'; j++)
        {
            string aux;
            aux+=i;
            aux+=j;

            if(!m[aux])
                return aux;
        }

    for(char i='a'; i<='z'; i++)
        for(char j='a'; j<='z'; j++)
            for(char k='a'; k<='z'; k++)
            {
                string aux;
                aux+=i;
                aux+=j;
                aux+=k;

                if(!m[aux])
                    return aux;
            }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>t;
    while(t)
    {
        t--;
        m.clear();
        cin>>n>>s;

        for(int i=0; i<n; i++)
        {
            string ns;
            for(int j=0; j<min(3, n-i); j++)
            {
                ns.push_back(s[i+j]);
                m[ns]=1;
            }
        }
        cout<<solve()<<'\n';
    }
    return 0;
}
