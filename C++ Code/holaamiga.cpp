#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_array_elements(vector<int>& arr) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if (find(arr.begin(), arr.end(), 0) != arr.end()) {
            cout << "no" << endl;
            return;
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n/2; i++) {
            cout << arr[i] << " " << arr[n-i-1] << " ";
        }
        if (n % 2 == 1) {
            cout << arr[n/2];
        }
        cout << endl;
    }
}