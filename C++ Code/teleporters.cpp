#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			arr[i] = arr[i]+(i+1);
		}
		int cost =0;
		sort(arr,arr+n);
		int count  =0;
		int i =0;
		while(cost<=c){
			count++;
			cost = cost + arr[i+1];
			i++;
		}
		cout<<count-1<<endl;

	}
}