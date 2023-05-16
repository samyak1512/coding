#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		if(n%2==0){
			for (int i = n; i>0; --i)
			{
				arr[n-(i)]=i;
			}
		}
		else if(n!=3){
			for (int i = 0; i<(n)/2; ++i)
			{
				arr[i]=n-i;
			}
			for (int i = (n)/2; i < n ; ++i)
			{
				arr[i] = i-(n/2)+1;
			}


		}

		else{
			cout<<"-1"<<endl;
			continue;
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}