#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
		ll t;
		cin>>t;
		while(t--){
			ll n;
			cin>>n;

			if(n==1){
				cout<<0<<endl;
			}

			else{
				ll ans = n*(n-1);
				ll modulo = 1e9+7;
				
				for (int i = 1; i < n+1; ++i)
				{
					ans = (ans*i)%modulo;
				}
				cout<<ans<<endl;
			}
		}
}