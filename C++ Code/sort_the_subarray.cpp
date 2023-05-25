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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		// vector<int>v(n);
		int l,r;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]!=b[i]){
				l = i;
				break;
			}
		}

		for (int i = n-1; i >= 0 ; --i)
		{
			if(arr[i]!=b[i]){
				r=i;
				break;
			}
		}

		// cout<<l+1<<" "<<r+1<<"previous"<<endl;

		for (int i = l-1; i >= 0; --i)
		{
			if(b[i]<=b[i+1]){
				l--;
			}
			else{
				break;
			}
		}

		for (int i = r; i < n-1; ++i)
		{
			if(b[i]<=b[i+1]){
				r++;
			}
			else{
				break;
			}
		}

		cout<<l+1<<" "<<r+1<<endl;
	}
}