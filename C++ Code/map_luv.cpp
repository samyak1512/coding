#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int i = 1;
while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}
}