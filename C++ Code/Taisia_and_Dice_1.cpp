#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 


signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,r;
		cin>>n>>s>>r;
		int max = s-r;
		int q = r/(n-1);
		int rem = r%(n-1);
		int arr[n];

		arr[0] = max;

		for (int i = 1; i < n+1; ++i)
		{
			arr[i] = q;
		}

		int c = rem;
		for (int i = 1; i < c+1; ++i)
		{
			arr[i] = arr[i]+1;
			rem--;
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}