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
		int count=0;
		int ans;
		for (int i = 0; i < n; ++i)
		{
			ans=0;
			
				while(arr[i]==0 && i<n){

					ans++;
					i++;
				}
			

			count = max(count,ans);
		}
		cout<<max(count,ans)<<endl;
	}
}