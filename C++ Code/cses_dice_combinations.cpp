#include <iostream>
#include <vector>
using namespace std;

int count = 0;

void f(vector<int>& a, int index, int sum, int n) {
    if (index >= a.size() or sum>n or index<0) {
        return;
    }
    if (sum == n) {
        count++;
        return;
        // cout<<"hi"<<endl;
    }
    for(int i=0;i<a.size();i++){
        // pick
        f(a, i, sum + a[i], n);
        // cout<<sum<<" ";



        
    }
        // not pick
        // f(a, index + 1, sum, n);
        // f(a, index - 1, sum, n);
    


}

void solve(int t) {
    int n;
    cin >> n;
    vector<int> a = {1, 2, 3, 4, 5, 6};
    //count = 0; // Reset count for each test case
    f(a, 0, 0, n);
    cout << count << endl;
}

signed main() {
    //fastio();
    int t = 1;
    //cin >> t;
    for (int i = 0; i < t; i++) {
        solve(t); // Pass t as an argument to solve, not i
    }
}
