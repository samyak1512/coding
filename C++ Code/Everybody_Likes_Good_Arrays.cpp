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
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll count=0;
		ll i =0;
		ll j=0;
		while (i < n)
		{
			if(arr[i]%2!=0){
				for (j = i+1; j < n;j++)
				{
					if(arr[j]%2!=0){
						count++;
					}
					else{
						break;
					}
				}
			}
			i=i+count+1;
			// cout<<i<<"hi"<<endl;
		}
		i = 0;
		j=0;
		while (i < n)
		{
			if(arr[i]%2==0){
				for (j = i+1; j < n;j++)
				{
					if(arr[j]%2==0){
						count++;
					}
					else{
						break;
					}
				}
			}
			i=i+count+1;
		}

		count = 0;
		for (int i = 0; i < n-1; ++i)
		{
			if((arr[i]%2==0 && arr[i+1]%2==0) || (arr[i]%2!=0 && arr[i+1]%2!=0)){
				count++;
			}
		}

		cout<<count<<endl;
	}
}