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
		int pre = 0;
		int suc = 0;
		int l,r;
		int count=0;
		int p,s;
		p=0;
		s=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>l>>r;
			if(l<=k-1 && k-1<=r){
				pre++;
			}
			if(l<=k+1 && k+1<=r){
				suc++;
			}
			if(l<=k && k<=r){
				count++;
			}
			if(l==r && l==k){
				count=100000+count;
			}
			if(l==k){
				p=1;
			}
			if(r==k){
				s=1;
			}
			// cout<<pre<<" "<<count<<" "<<suc<<endl;
		}
		if(p && s){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}