
#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.out", "w", stdout);
#endif

    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	int m;

	cin >> m;

	int arr[2][m];

	for(int i = 0; i < 2; ++i){
		for(int j = 0; j < m; ++j){
			cin >> arr[i][j];
		}
	}

	int ans = INT_MAX;

	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < m; ++i){
		sum1 += arr[0][i];
	}

	for(int i = 0; i < m; ++i){
		sum1 -= arr[0][i];
		ans = min(ans, max(sum1, sum2));
		sum2 += arr[1][i];
	}

	cout << ans ;
}

