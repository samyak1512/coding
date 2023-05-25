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
		vector<int>v(n);
		int count=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			if(v[i]<0){
				count++;
			}
		}
		// vector<int>neg(count);
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(v[i]<0){
		// 		neg.push_back(v[i]);
		// 	}
		// }
		// sort(neg.begin(), neg.end());
		sort(v.begin(), v.end());

		cout<<max((v[n-1]*v[n-2]),(v[0]*v[1]))<<endl;
	}
}