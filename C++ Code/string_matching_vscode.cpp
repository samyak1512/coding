#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
vector<int> rolling_hash(string s, int window_size, int base = 26, int mod = 1000000007) {
    int n = s.length();
    vector<int> power(n + 1, 1);
    vector<int> hash_values(n - window_size + 1, 0);
 
    // Precompute the powers of the base modulo the mod
    for (int i = 1; i <= n; ++i) {
        power[i] = (1LL * power[i - 1] * base) % mod;
    }
 
    // Compute the hash value of the first window
    int current_hash = 0;
    for (int i = 0; i < window_size; ++i) {
        current_hash = (1LL * current_hash * base + s[i]) % mod;
    }
 
    hash_values[0] = current_hash;
 
    // Compute the hash values of the rest of the substrings
    for (int i = 1; i <= n - window_size; ++i) {
        // Remove the contribution of the first character in the window
        current_hash = (current_hash - 1LL * power[window_size - 1] * s[i - 1]) % mod;
 
        // Ensure the hash value is non-negative
        current_hash = (current_hash + mod) % mod;
 
        // Shift the window by one character and add the new character to the hash
        current_hash = (1LL * current_hash * base + s[i + window_size - 1]) % mod;
 
        hash_values[i] = current_hash;
    }
 
    return hash_values;
}
 
int main() {
    // Input strings
    string s, t;
    cin >> s >> t;
 
    if (t.length() > s.length()) {
        cout << 0 << endl;
    } else {
        // Window size
        int window_size = t.length();
 
        // Calculate rolling hash values
        vector<int> hash_values = rolling_hash(s, window_size);
        vector<int> hasher = rolling_hash(t, t.length());
 
        // Count occurrences
        int count = 0;
        for (int i : hash_values) {
            if (i == hasher[0]) {
                count++;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}