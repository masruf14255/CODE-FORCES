#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define fi first
#define se second

const ll mod = 1e9 + 7; // !!!!!

void solve() {
    string s;
    cin >> s;
    int ans = 10;
    for(int i = 0; i < 2; ++i) {
        string temp = s;
        for(int j = 0; j < 10; ++j) {
            if(temp[j] == '?') {
                if(i == j % 2) temp[j] = '1';
                else temp[j] = '0';
            }
        }
        vector<int> cnt(2, 0);
        vector<int> hatra(2, 5);
        for(int j = 0; j < 10; ++j) {
            if(temp[j] == '1') ++cnt[j % 2];
            --hatra[j % 2];
            if(cnt[0] > cnt[1] + hatra[1] || cnt[1] > cnt[0] + hatra[0]) {
                ans = min(ans, j + 1);
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T; // !!!!!
    while(T--) solve();
    return 0;
}

