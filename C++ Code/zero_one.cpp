#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n, x, y;
        cin >> n >> x >> y;
        
        string a, b;
        cin >> a >> b;

        int count = 0;
        int c = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                count += 1;
                c = i;
            }
        }

        if (count % 2 != 0) {
            cout << -1 << endl;
        } else {
            // vector<int> arr;

            // for (int i = 0; i < n; ++i) {
            //     if (a[i] != b[i]) {
            //         arr.push_back(i);
            //     }
            // }

            if (count == 2) {
                if (a[c] != b[c] && a[c - 1] != b[c - 1]) {
                    cout << min(x, 2 * y) << endl;
                }
                else{
                    cout<<y<<endl;
                    return 0;
                }
            } else {
                cout << (count / 2) * y << endl;
            }
        }
    }

    return 0;
}
