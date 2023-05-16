#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main(){
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

		int flag=0;

		for (int i = 0; i < n; ++i)
		{
			if(arr[i]==arr[0]){
				flag++;
				
				
			}
		}
		// int same=0;
		
		
		// cout<<same<<endl;

		sort(arr,arr+n);
		int same=0;
		for (int i = n-1; i >= 0; --i)
		{
			if(arr[n-1]==arr[i]){
				same++;
				// cout<<"hi";
			}
		}
		// cout<<same;
		if(arr[n-1]==arr[n-2]){
			swap(arr[n-2],arr[n-same-1]);
			// cout<<"hi";
		}

		if(flag==n){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for (int i = n-1; i >= 0; --i)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
}