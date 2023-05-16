#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, t, c;
    cin >> n >> t >> c;
    int price[n], cagr[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cagr[i];
    }

    int dp[n+1][c+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                int no_buy = dp[i-1][j];
                int buy = 0;
                if (j >= price[i-1]) {
                    buy = floor((1.0 + cagr[i-1]/100.0) * dp[i-1][j-price[i-1]] * pow(10, 6)) / pow(10, 6);
                }
                dp[i][j] = max(no_buy, buy);
            }
        }
    }

    cout << floor(dp[n][c]) << endl;

    return 0;
}