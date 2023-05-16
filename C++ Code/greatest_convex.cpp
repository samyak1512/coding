#include <bits/stdc++.h>
using namespace std;
#define ll long long

int find_x(int k) {
    int x = k - 1;
    while (x > 0) {
        if (x % 2 == 0 && k % 2 == 1) {
            return x;
        }
        if (x % 2 == 1 && k % 2 == 0) {
            return x;
        }
        x -= 2 * (x % 2 == 0) + 1;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        find_x(n);
    }
}