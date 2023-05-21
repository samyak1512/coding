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
		string s;
		cin>>s;
		vector<string>v(n-1);
		for (int i = 0; i < n-1; ++i)
		{
			v[i] = s.substr(i,2);
		}
		for (int i = 0; i < n-1; ++i)
		{
			// cout<<v[i]<<" ";
		}
		// cout<<endl;

		set<string>se;
		for (int i = 0; i < n-1; ++i)
		{
			se.insert(v[i]);
		}

		int count = se.size();
		cout<<count<<endl;
	}

}