#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr1[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}

	int k;
	cin>>k;

	int arr2[k];
	int arr3[k];
	for (int i = 0; i < k; ++i)
	{
		cin>>arr2[i];
	}

	for (int i = 0; i < k; ++i)
	{
		cin>>arr3[i];
	}

	
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr1[j]==arr2[i]){
				arr1[j] = arr3[i];
			}

		}
		int sum = 0;
		for (int m = 0; m < n; ++m)
		{
			sum = sum + arr1[m];
		}

		cout<<sum<<" ";
	}
}