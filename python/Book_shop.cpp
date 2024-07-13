#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, budget;
    cin >> n >> budget;

    vector<int> cost(n);
    vector<int> pages(n);

    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    // Initialize the DP table
    vector<vector<int> > dp(n + 1, vector<int>(budget + 1, 0));

    for (int i = 1; i <= n; i++) {
        int curr_cost = cost[i-1];
        int curr_pages = pages[i-1];

        for (int j = 1; j <= budget; j++) {
            // If the current book is not bought
            dp[i][j] = dp[i-1][j];

            if (curr_cost <= j) {
                // If the current book can be bought
                dp[i][j] = max(dp[i][j], dp[i-1][j-curr_cost] + curr_pages);
            }
        }
    }

    cout << dp[n][budget] << endl;

    return 0;
}