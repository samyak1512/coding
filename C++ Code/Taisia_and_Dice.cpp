#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int s;
		int r;
		int sum =0;
		cin>>n>>s>>r;
		int max = s-r;
		int arr[n];
		arr[0] = max;
		int c = (r/(n-1)-1);
		if(c>1 && c<max){
			for (int i = 1; i < n-1; ++i)
			{
					
					arr[i] = c;
				
			}

			sum = max + (n-2)*(c);
			arr[n-1] = s-sum;
		}

		else if(c>1 && c>=max){
			for (int i = 1; i < n-1; ++i)
			{
				arr[i] = c-1;
			}

			sum = 0;
			for (int i = 0; i < n-1; ++i)
			{
				sum = sum + arr[i];
			}

			arr[n-1] = s-sum;
		}
		else{
			for (int i = 1; i < n-1; ++i)
			{
				arr[i] = 1;
			}
			sum = 0;
			for (int i = 0; i < n-2; ++i)
			{
				sum = sum + arr[i];
			}

			arr[n-1] = s-sum-1;
		}
		
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		// cout<<c;
		cout<<endl;
	}
}