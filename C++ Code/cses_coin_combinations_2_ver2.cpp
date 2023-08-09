#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //dp[i] => no. of ways to make ith sum from coins [1...n] in any order.
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= x; ++j)
        {
            if(j < arr[i])continue;
            dp[j] += dp[j - arr[i]];
            if(dp[j] >= MOD)dp[j] -= MOD;
        }
    }
    cout<<dp[x]<<'\n';
}

signed main() {
    fastio();
    int t = 1;
    // cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
