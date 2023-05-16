#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];

		}
		int m;
		cin>>m;
		int array[m];
		
		
		for (int j = 0; j < m; ++j)
		{
			cin>>array[j];
		}
		
		
		int a = *max_element(arr, arr + n);
		int b = *max_element(array, array + m);
		
		
		if(a>b){
			cout<<"Alice"<<endl;
			cout<<"Alice"<<endl;

		}
		else if(a<b){
			cout<<"Bob"<<endl;
			cout<<"Bob"<<endl;

		}
		else if(a==b){
			cout<<"Alice"<<endl;
			cout<<"Bob"<<endl;
		}
	}
}