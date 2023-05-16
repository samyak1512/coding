#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size();
		string sub = s.substr(0,s.size()/2);
		int k = unique(sub.begin(),sub.end())-sub.begin();
		if(k==1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}