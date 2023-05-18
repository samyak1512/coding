#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			arr[i] = abs(arr[i]-(i+1));
		}

		if(k==1){
			cout<<0<<endl;
		}
		else{
			// cout<<"hi"<<endl;
			int count=0;
			for (int i = 0; i < n; ++i)
			{
				if(arr[i]%k!=0){
					count++;
				}
			}

			// cout<<count<<endl;
			if (count==0){
				cout<<0<<endl;
			}
			if(count==2){
				// cout<<"hello"<<endl;
				vector<int>v;
				for (int i = 0; i < n; ++i)
				{
					if(arr[i]%k!=0){
						v.push_back(arr[i]);
					}
				}
				// for (int i = 0; i < 2; ++i)
				// {
				// 	cout<<v[i]<<" ";
				// }

				if(abs(v[0]-v[1])%k==0){

					cout<<1<<endl;
				}
			}
			else if(count!=0){
				cout<<-1<<endl;
				// cout<<count;
			}
		}
	}
}