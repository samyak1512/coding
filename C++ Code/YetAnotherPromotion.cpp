#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,n,m;
		cin>>a>>b>>n>>m;
		int  ans = (n/(m+1))*m*a;
		ans = ans + min(a,b)*(n%(m+1));
		ans = min(ans,n*a);
		cout<<min(ans,n*b)<<endl;
	}
}