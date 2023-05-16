#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    for (int case_num = 1; case_num <= test_cases; case_num++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        char smallest = s[0];
        int smallest_pos = 0;

        if (n > 1) {
            for (int i = n-1; i > 0 ; --i) {
                if (s[i] < smallest) {
                    smallest = s[i];
                    smallest_pos = i;
                } else if (s[i] == smallest && i > smallest_pos) {
                    smallest_pos = i;
                }
            }
        }

        if (smallest_pos > 0) {
            s.erase(smallest_pos, 1);
            s.insert(0, 1, smallest);
        }

        cout << s << endl;
    }

    return 0;
}