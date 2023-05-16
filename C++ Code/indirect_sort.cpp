#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }

        if(arr[0]==1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}