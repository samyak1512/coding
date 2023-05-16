#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            for (int i = 1; i < n+1; ++i)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

        else{
            for (int i = 1; i < n+1; ++i)
            {
                cout<<2*i<<" ";
            }
            cout<<endl;
        }
    }
}