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
		int k;
		vector<int>v1(10,INT_MAX);
		vector<int>v2(10,INT_MAX);
		vector<int>v3(10,INT_MAX);

		for (int i = 0; i < n; ++i)
		{
			cin>>k; 
			cin>>s;

			if(s=="10"){
				v1.push_back(k);
				// cout<<"hello"<<endl;
			}
			if(s=="01"){
				v2.push_back(k);
			}
			if(s=="11"){
				// cout<<"hi";
				v3.push_back(k);
				// cout<<"hi"<<endl;
			}

		}
		// v3[0]=5;

		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		sort(v3.begin(),v3.end());

		// for (int i = 0; i < v3.size(); ++i)
		// {
		// 	cout<<v3[i]<<" ";
		// }
		// cout<<endl;

		int ans  = min(v1[0]+v2[0],v3[0]);
		if(ans==INT_MAX){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
		}
		// cout<<INT_MAX;

	}
}