#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n][n];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				arr[i][j]=0;
			}
		}
		int u,v;
		for (int i = 0; i < n; ++i)
		{
			cin>>u>>v;
			arr[u-1][v-1]=1;
			arr[v-1][u-1]=1;

		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	for (int j = 0; j < n; ++j)
		// 	{
		// 		cout<<arr[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// cout<<endl;
		int sum=0;
		int array[n];
		for (int i = 0; i < n; ++i)
		{
			sum=0;
			for (int j = 0; j < n; ++j)
				{
					
					sum=sum+arr[i][j];
				}
			array[i]=sum;	
		}
		// cout<<n<<endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<array[i]<<" ";
		// }
		// cout<<endl;

		int maxi=0;
		for (int i = 0; i < n; ++i)
		{
			maxi = max(maxi,array[i]);
		}

		int count=0;
		for (int i = 0; i < n; ++i)
		{
			if(array[i]==1){
				count++;
			}
		}

		int ans1 = n-count-1;
		int ans2 = count/ans1;
		cout<<ans1<<" "<<ans2<<endl;

	}
}