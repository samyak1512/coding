#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        } 
        vector<int>m;
        int i=0;
        for(i=0;i<n;i++){
            if(v[i]==1){
                m.push_back(1);
                break;
            }
        }
        int j=0;
        for(;i<n;i++){
            if(m[j]+1==v[i]){
                m.push_back(v[i]);
                j++;
            }
        }
        int l=n- m.size();
        if(l%k==0){
            cout<<l/k<<endl;
        }
        else{
            cout<<l/k+1<<endl;
        }
    }
}