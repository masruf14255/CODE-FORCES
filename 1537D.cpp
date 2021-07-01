#include<bits/stdc++.h>
#define LL long long
#define pb push_back
#define mp make_pair
using namespace std;

int n;

int main()
{
    int tests;scanf("%d",&tests);
    while(tests--) {
        scanf("%d",&n);
        if(n&1) {puts("Bob");continue;}
        int cnt=0;
        while(n%2==0) cnt++,n/=2;
        if(n>1) puts("Alice");
        else if(cnt%2==0) puts("Alice");
        else puts("Bob");
    }
}
