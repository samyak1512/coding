#include <iostream>
#include <numeric>
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n;
        std::cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        
     
        int array[n];
        for (int i = 0; i < n; ++i) {
            // cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
            // cout<<endl;
            array[i] = abs(arr[i] - arr[n - 1 - i]);
            
        }

        // for (int i = 0; i < n; ++i)
        // {
        //     cout<<array[i]<<" ";
        // }
        // cout<<endl;
           int gcd =  (array[0]);
        for (int i = 0; i < n; ++i)
        {
            gcd = __gcd(array[i], gcd);
        }
        std::cout << gcd << std::endl;
    }
    
    return 0;
}
