#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[m][2];
        for (int i = 0; i < m; ++i)
        {
            arr[i][0] = 0;
            arr[i][1] = 0;
        }
        int u,v;
        for (int i = 0; i < m; ++i)
        {
            cin>>u>>v;
            arr[i][0] = u;
            arr[i][1] = v;
        }

        int degree[n];
        memset(degree, 0, sizeof(degree));
        for (int i = 0; i < m; ++i)
        {
            degree[arr[i][0]-1]++;
            degree[arr[i][1]-1]++;
        }

        int count=0;
        for (int i = 0; i < n; ++i)
        {
            if(degree[i]==1){
                count++;
            }
        }

        int ans1 = n-count-1;
        int ans2 = count/ans1;
        cout<<ans1<<" "<<ans2<<endl;

    }
}
