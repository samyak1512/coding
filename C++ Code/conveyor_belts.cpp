#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int ii() {
    int x;
    cin >> x;
    return x;
}

int base9(int x) {
    string digits;
    int base9_int = 0;
    while (x > 0) {
        digits.push_back('0' + x % 9);
        x /= 9;
    }
    for (char c : digits) {
        base9_int = base9_int * 10 + (c - '0');
    }
    return base9_int;
}

signed main() {
    int t = ii();
    while (t--) {
        int n = ii();
        int base9_n = base9(n);
        string s = to_string(base9_n);

        for (char& c : s) {
            if (c == '8') {
                c = '9';
            } if (c=='7') {
                c='8';
            }
             if (c=='6') {
                c='7';
            }
             if (c=='5') {
                c='6';
            }
             if (c=='4') {
                c='5';
            }
            
        }
        reverseStr(s);
        cout << s << endl;
    }
    return 0;
}