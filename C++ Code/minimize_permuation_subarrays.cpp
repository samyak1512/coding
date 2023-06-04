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
		int v[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		int mid=0;
		int left=0;
		int right=0;

		for (int i = 0; i < n; ++i)
		{
			if(v[i]==n){
				mid=i;
			}
			if(v[i]==1){
				left=i;
			}
			if(v[i]==2){
				right=i;
			}
		}

		// cout<<left<<endl;
		// cout<<right<<endl;
		// cout<<mid<<endl;

		if(left<mid && mid<right){
			cout<<left+1<<" "<<right+1<<endl;
		}
		if(left>mid && mid>right){
			cout<<left+1<<" "<<right+1<<endl;
		}

		if(mid<left && mid<right){
			cout<<mid+1<<" "<<min(left,right)+1<<endl;
		}

		if(mid>left && mid>right){
			cout<<mid+1<<" "<<max(left,right)+1<<endl;
		}
	}
}