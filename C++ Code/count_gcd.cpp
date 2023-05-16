#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m;
		cin>>m;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int counter=0;
		int array[n];
		for (int i = 1; i < n+1; ++i)
		{
			array[0]=arr[0];
			if(arr[i]!=1){
				for (int j = 0; j < m; ++j)
				{
					if(__gcd(j,array[i-1])==arr[i]){
						
						while(__gcd(j,array[i-1])==arr[i]){
							counter++;
							array[i]=j;
						}
					}
					else{
						array[i]=69;
						break;
					}
				}
			}
			
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<array[i]<<endl;
		// }
		cout<<counter<<endl;
	}
}