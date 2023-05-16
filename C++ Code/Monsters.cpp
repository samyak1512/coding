#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
    int test_cases;
    cin >> test_cases;
    for (int t = 0; t < test_cases; t++) {
        int n, w, h;
        cin >> n >> w >> h;
        int samyak = (w-h)*2;
        vector<int> cakes(n), disp(n);

        for (int i = 0; i < n; i++) {
            cin >> disp[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> cakes[i];
        }
        
        vector<int> newl(n);
        for (int i = 0; i < n; i++) {
            newl[i] = cakes[i] - disp[i];
        }
        if (*max_element(newl.begin(), newl.end()) - *min_element(newl.begin(), newl.end()) <= samyak) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
