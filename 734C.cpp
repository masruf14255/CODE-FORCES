#include<bits/stdc++.h>
using namespace std;
struct Word{
    int a;
    int b;
    int c;
    int d;
    int e;
    int sz;
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Word> sent(n);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            vector<int> cnt(5, 0);
            for (int i = 0; i < s.size(); i++) {
                cnt[s[i]-'a']++;
            }
            sent[i].a = cnt[0];
            sent[i].b = cnt[1];
            sent[i].c = cnt[2];
            sent[i].d = cnt[3];
            sent[i].e = cnt[4];
            sent[i].sz = cnt[0]+cnt[1]+cnt[2]+cnt[3]+cnt[4];
        }

        int ans = 0;

        sort(sent.begin(), sent.end(), [](Word a, Word b){return a.a*2-a.sz > b.a*2-b.sz;});
        int dif1 = 0;
        bool stp1 = false;
        for (int i = 0; i < n; i++) {
            dif1 += sent[i].a*2-sent[i].sz;
            if (dif1 <= 0) {
                ans = max(ans, i);
                stp1 = true;
                break;
            }
        }
        if (!stp1) ans = max(ans, n);

        sort(sent.begin(), sent.end(), [](Word a, Word b){return a.b*2-a.sz > b.b*2-b.sz;});
        int dif2 = 0;
        bool stp2 = false;
        for (int i = 0; i < n; i++) {
            dif2 += sent[i].b*2-sent[i].sz;
            if (dif2 <= 0) {
                ans = max(ans, i);
                stp2 = true;
                break;
            }
        }
        if (!stp2) ans = max(ans, n);

        sort(sent.begin(), sent.end(), [](Word a, Word b){return a.c*2-a.sz > b.c*2-b.sz;});
        int dif3 = 0;
        bool stp3 = false;
        for (int i = 0; i < n; i++) {
            dif3 += sent[i].c*2-sent[i].sz;
            if (dif3 <= 0) {
                ans = max(ans, i);
                stp3 = true;
                break;
            }
        }
        if (!stp3) ans = max(ans, n);

        sort(sent.begin(), sent.end(), [](Word a, Word b){return a.d*2-a.sz > b.d*2-b.sz;});
        int dif4 = 0;
        bool stp4 = false;
        for (int i = 0; i < n; i++) {
            dif4 += sent[i].d*2-sent[i].sz;
            if (dif4 <= 0) {
                ans = max(ans, i);
                stp4 = true;
                break;
            }
        }
        if (!stp4) ans = max(ans, n);

        sort(sent.begin(), sent.end(), [](Word a, Word b){return a.e*2-a.sz > b.e*2-b.sz;});
        int dif5 = 0;
        bool stp5 = false;
        for (int i = 0; i < n; i++) {
            dif5 += sent[i].e*2-sent[i].sz;
            if (dif5 <= 0) {
                ans = max(ans, i);
                stp5 = true;
                break;
            }
        }
        if (!stp5) ans = max(ans, n);

        cout << ans << endl;
    }
}
