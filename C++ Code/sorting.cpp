#include <bits/stdc++.h>
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
			cin>>arr[n];
		}
		int m;
		cin>>m;
		int array[m];
		for (int j = 0; j < m; ++j)
		{
			cin>>array[j];
		}
		for (int k = 0; k < m; ++k)
		{
			for (int z = 0; z < n; ++z)
			{
				for (int i = 0; i < m; ++i)
				{
					arr[i]=arr[n-array[z]+i];

				}
				for (int j = m-1; j < n; ++j)
				{
					arr[j]=arr[j-array[z]];
				}
			}
		}

		cout<<arr[0]<<endl;
	}
}