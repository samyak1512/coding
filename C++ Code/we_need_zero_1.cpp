#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < 257; ++i)
	{
		int b[n];
		for (int j = 0; j <n; ++j)
		{
			b[j] = a[j]^i;
		}

		int ans=0;
		for (int k = 0; k < n; ++k)
		{
			ans = ans ^b[k];
		}
		if(ans==0){
			cout<<i<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}