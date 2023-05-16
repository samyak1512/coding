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
		int x=0;
		int flag=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			x = x ^ arr[i];
		}
		sort(arr,arr+n);
		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i]==arr[i+1]){
				flag=1;
			}
		}

		if(flag==1){
			cout<<-1<<endl;
		}
		else{
		cout<<x<<endl;}
	}
}