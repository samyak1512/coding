#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];

		}

		
		ll r = arr[0];
		for (ll i = 0; i < n; ++i)
		{	
			if(1)
			{r = arr[i] | r;}
		// cout<<r;
		}
		ll flag=0;
		for (ll i = 0; i < n; ++i)
		{
			if(arr[0]!=arr[i]){
				flag=1;
			}
		}

		ll x=arr[0];
		for (ll i = 0; i < n; ++i)
		{	
			if(1)
			{x= arr[i] & x;}
		// cout<<r;
		}

		if(flag==1){
			cout<<r-x<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}