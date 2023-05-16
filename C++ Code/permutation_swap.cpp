#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            arr[i] = abs(arr[i] - (i + 1)); 
        }

        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (arr[i] != 0) {
                v.push_back(arr[i]);
            }
        }

        int ans = *min_element(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i) {
            ans = __gcd(v[i], ans);
        }

        cout << ans << endl;
    }
}
