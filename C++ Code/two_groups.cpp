#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int flag=0;
		long long possum=0;
		long long negsum=0;
		for (long long i = 0; i < n; ++i)
		{
			if(arr[i]>=0){
				possum=possum+arr[i];
			}
			else if(arr[i]<0){
				negsum=negsum+arr[i];
			}

		}

		long long ans = negsum+possum;
		if(ans<0){
			ans = -1*ans;
		}
		cout<<ans<<endl;
	}
}