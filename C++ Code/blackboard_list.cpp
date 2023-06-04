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
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int diff=0;
		int flag=0;
		for (int i = 0; i < n; ++i)
		{
			if (arr[i]<0){
				cout<<arr[i]<<endl;
				flag=1;
				break;
			}
		}

		if(flag==0){
			for (int i = 0; i < n; ++i)
			{
				for (int j = i+1; j <n ; ++j)
				{
					diff = max(diff, abs(arr[i]-arr[j]));
				}
			}

			cout<<*max_element(arr, arr+n)<<endl;
		}

		
	}
}