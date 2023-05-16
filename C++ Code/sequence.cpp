#include <iostream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;
        vector<int> moves;

        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        while (true) {
            if (((n + 1) / 2) % 2 == 1) {
                moves.push_back(1);
                n = (n + 1) / 2;
            } else {
                moves.push_back(2);
                n = (n - 1) / 2;
            }

            if (n == 1) {
                break;
            }
        }

        reverse(moves.begin(), moves.end());
        cout << moves.size() << endl;
        for (int move : moves) {
            cout << move << " ";
        }
        cout << endl;
    }

    return 0;
}