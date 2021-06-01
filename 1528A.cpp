/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;

vector<vector<int>> adj;
vector<i64> dp[2]; // 0: left;  1: right
vector<i64> l,r;

void rsz(vector<i64>&v,int sz) {
    vector<i64>().swap(v);
    v.resize(sz);
}
void rsz(vector<vector<int>>&v,int sz) {
    vector<vector<int>>().swap(v);
    v.resize(sz);
}
void rsz(vector<i64> v[],int sz) {
    for(int i=0;i<2;++i) {
        rsz(v[i],sz);
    }
}

void dfs(int v,int p) { // 0:left
    dp[0][v] = 0; dp[1][v] = 0;
    for(int c : adj[v]) {
        if(c==p) continue;

        dfs(c,v);
        dp[0][v] += max(dp[0][c]+abs(l[v]-l[c]),dp[1][c]+abs(l[v]-r[c]));
        dp[1][v] += max(dp[0][c]+abs(r[v]-l[c]),dp[1][c]+abs(r[v]-r[c]));
    }
}

void sol() {
    int n;
    cin >> n;
    rsz(dp,n);
    rsz(adj,n);
    rsz(l,n);
    rsz(r,n);

    for(int i=0;i<n;++i) {
        cin >> l[i];
        cin >> r[i];
        // cout << "now at " << i << endl;
    }
    for(int i=1;i<n;++i) {
        int a,b;
        cin >> a >> b;
        --a; --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0,-1);
    cout << max(dp[0][0],dp[1][0]) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    for(;t;--t) {
        sol();
        // cout << "now at case " << t << endl;
    }

    return 0;
}
