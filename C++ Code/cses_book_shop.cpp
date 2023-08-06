#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int f(vector<int>& books, vector<int>& dp, vector<int>& costofBook, int pages, int cost, int x, int index) {
    if (index == books.size() || cost == x) {
        return pages;
    }

    if (dp[index] != -1) {
        return dp[index];
    }

    int pick = f(books, dp, costofBook, pages + books[index], cost + costofBook[index], x, index + 1);
    int notpick = f(books, dp, costofBook, pages, cost, x, index + 1);

    dp[index] = max(pick, notpick);
    return dp[index];
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

    vector<int> dp(n + 1, -1);
    cout << f(books, dp, costofBook, 0, 0, x, 0);
}

signed main() {
    fastio();
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
