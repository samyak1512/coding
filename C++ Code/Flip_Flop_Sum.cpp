#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i]==-1 && arr[i+1]==-1){
				flag=1;
				break;
			}
		}
		if(flag!=1){
			for (int i = 0; i < n-1; ++i)
			{
				if((arr[i]==1 && arr[i+1]==-1) || (arr[i]==-1 && arr[i+1]==1)){
					
					flag=2;
					break;
				}
			}
			if(flag!=2){
				for (int i = 0; i < n-1; ++i)
				{
					if(arr[i]==1 && arr[i+1]==1){
						flag=3;
						break;
					}
				}
			}
		}

		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum = sum +arr[i];
		}

		if(flag==1){
			sum = sum+4;
			
		}

		else if(flag==2){
			sum = sum;
		}

		else if(flag==3){
			sum = sum - 4;
		}

		cout<<sum<<endl;

	}
}