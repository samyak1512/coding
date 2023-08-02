#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        long long ans = 0;
        if (i >= 7) {
            // dp[i] = (dp[i-1] * 2) - dp[i-7];
            for (int j = i - 6; j <= i - 1; j++) {
                ans += dp[j];
            }
            dp[i] = ans % (1000000007); // To avoid overflow
        } else {
            for (int j = 0; j <= i - 1; j++) {
                ans += dp[j];
            }
            dp[i] = ans % (1000000007); // To avoid overflow
        }
    }

    cout << dp[n] << endl;

    return 0;
}