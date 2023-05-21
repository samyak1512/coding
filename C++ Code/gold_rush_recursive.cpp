#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int divider(int n, int m){
	if(n==m){
		return true;

	}

	else if(n%3!=0){
		return false;
	}

	else {
		return (divider(n/3,m)||divider(n*2/3,m));

	}
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ans=0;
		ans = divider(n,m);
		if(ans==0){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}