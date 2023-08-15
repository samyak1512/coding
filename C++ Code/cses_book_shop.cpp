#include <bits/stdc++.h>
using namespace std;

// ... (Macro definitions and utility functions)

void solve() {
    int n, maxprice;
    cin >> n >> maxprice;
    // cout<<"hi"<<endl;
    vector<int> priceofBook(n);
    vector<int> pagesofBook(n);
    for (int i = 0; i < n; ++i) {
        cin >> priceofBook[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> pagesofBook[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(maxprice + 1, 0));
    // dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= maxprice; j++) {
            if (j >= priceofBook[i - 1]) {
                dp[i][j] = max(dp[i - 1][j], pagesofBook[i - 1] + dp[i - 1][j - priceofBook[i - 1]]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][maxprice] << endl;
    // for (int i = 0; i < n+1; ++i)
    // {
    //     for (int j = 0; j < maxprice+1; ++j)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}


signed main() {
    // fastio();
    int t=1;
    // cin >> t;

    // cout<<"hi"<<endl;
    while(t--){
        solve();
    }
    return 0;
}
