#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int flag=0;
		// cout<<n<<k;
		if(k>n){
			// cout<<"no"<<endl;
		}

		else{
			while(2*n>=k){
				int x = n;
				int y  = 2*n;
				cout<<x<<" "<<y<<endl;
				if(x==k || y==k){
					flag=1;
					break;
				}
				n=n/3;
			}
			if(flag==0){
				cout<<"no"<<endl;
			}
			else{
				cout<<"yes"<<endl;
			}
		}
	}
}