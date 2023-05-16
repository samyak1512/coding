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
			cin>>arr[i];
		}

		int ans1[n];
		int ans2[n];

		if(n==2){
			if(arr[0]>arr[1]){
				cout<<-1<<endl;
			}
			else{
				ans1[0] = arr[0];
				ans2[0] = arr[1];
			}
		}
		int counter = 0;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]>arr[0]){
				counter = 1;
				counter = i;
				break;

			}

			if(counter==0){
			cout<<-1<<endl;
		}
		}

		

		for (int i = 0; i < counter; ++i)
		{
			ans1[i]=arr[i];
			cout<<ans1[i]<<" ";
		}
		for (int i = counter; i < n; ++i)
		{
			ans2[i]=arr[i];
			cout<<ans2[i]<<" ";
		}

		
	}
}