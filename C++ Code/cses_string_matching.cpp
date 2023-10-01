#include <iostream>
#include <vector>
#include <set>
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int c = 0; c < t; ++c) {
        int n, m;
        cin >> n >> m;

        set<int> myset;
        int count = 0;

        while (true) {
            if (n % m == 0) {
                cout << count << endl;
                break;
            }

            if (n > m) {
                int l = myset.size();
                myset.insert(n % m);
                if (l == myset.size()) {
                    cout << -1 << endl;
                    break;
                }
                n = n % m;
            } else {
                int temp = n;
                int power2greaterorequalthan = m / n;
                if (power2greaterorequalthan == m / n) {
                    power2greaterorequalthan -= 1;
                }
                int power2req = 0;
                while (power2greaterorequalthan > 0) {
                    power2greaterorequalthan /= 2;
                    power2req += 1;
                }
                n = n * (1 << power2req);
                count += temp * ((1 << power2req) - 1);
                cout<<count<<endl;
            }
        }
    }
    

    return 0;
}
