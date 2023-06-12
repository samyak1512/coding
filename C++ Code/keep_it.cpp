#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<int> newarr;
        newarr.push_back(arr[0]);
        string ans = "1";
        bool used = false;

        for (int i = 1; i < n; ++i) {
            if (used) {
                if (arr[i] >= newarr.back() && arr[i] <= newarr[0]) {
                    ans += '1';
                    newarr.push_back(arr[i]);
                } else {
                    ans += '0';
                }
            } else {
                if (arr[i] < newarr.back()) {
                    if (arr[i] <= newarr[0]) {
                        used = true;
                        ans += '1';
                        newarr.push_back(arr[i]);
                    } else {
                        ans += '0';
                    }
                } else {
                    ans += '1';
                    newarr.push_back(arr[i]);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
