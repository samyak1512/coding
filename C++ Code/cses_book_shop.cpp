#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int f(vector<int>& books, vector<int>& dp, vector<int>& costofBook, int cost, int x, int index) {
    if (index == books.size()) {
        return 0;
    }

    if (dp[index][costofBook[index]] != -1) {
        return dp[index][costofBook[index]];
    }

    int pick = (cost + costofBook[index] > 0?f(books, dp, costofBook, cost - costofBook[index], x, index + 1) + books[index]:0);
    int notpick = f(books, dp, costofBook, cost, x, index + 1);

    dp[index][costofBook[index]] = max(pick, notpick);
    return dp[index][costofBook[index]];
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> books(n);
    vector<int> costofBook(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> costofBook[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> books[i];
    }

    vector<int> dp(x+1, vector<int>(n+1, -1);
    // for(int i = 1; i <= n; ++i)
    // {
    //     for(int j = x; j >= costofBook[i - 1]; --j)
    //     {
    //         dp[j] = max(dp[j], dp[j - costofBook[i - 1]] + books[i - 1]);
    //     }
    // }
    cout << f(books, dp, costofBook, 0, x, 0);
// }

signed main() {
    fastio();
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
