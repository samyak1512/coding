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

		for (int i = 0; i < n; ++i)
		{
			cout<<n+1-arr[i]<<" ";
		}
		cout<<endl;
	}
}