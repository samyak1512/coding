#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		vector<pair<int,int>>m;
		for (int i = 0; i < n; ++i)
		{
			int h;
			cin>>h;
			m.push_back({h,i});
		}
		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		sort(m.begin(), m.end());
		sort(b,b+n);

		vector<int>v(n);

		for (int i = 0; i < n; ++i)
		{
			v[m[i].second]=b[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}
}