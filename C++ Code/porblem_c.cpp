#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int calc(int x, int a, int b, int c) {
    return a*x*x + b*x + c;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> k(n);
        vector<pair<int, pair<int,int>>> queries(m);

        for (int i = 0; i < n; ++i)
            cin >> k[i];

        for (int i = 0; i < m; ++i)
            cin >> queries[i].first >> queries[i].second.first >> queries[i].second.second;

        for (int i = 0; i < m; ++i) {
            bool found = false;
            for (int j = 0; j < n; ++j) {
                int x = k[j];
                int a = queries[i].second.first;
                int b = queries[i].second.second;
                int c = queries[i].first;

                if (a*x*x + b*x >= 0) {
                    if (calc(x, a, b, c) < 0) {
                        cout << "yes\n" << -x << endl;
                    } else {
                        cout << "yes\n" << x << endl;
                    }
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "no\n";
            }
        }
    }

    return 0;
}