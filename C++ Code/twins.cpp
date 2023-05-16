#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);
	reverse(arr,arr+n);
	double sum = 0;
	int i=0;
	sum = accumulate(arr,arr+n,sum);
	int par = 0;
	for (i = 0; i < n; ++i)
	{
		par = par + arr[i];
		if(par>(sum)/2){
			break;
		}
	}
	cout<<i+1;
}