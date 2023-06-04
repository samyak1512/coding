#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int longest(int z, int arr[], int n){
	int count=0;
	for (int i = 0; i < n; ++i)
	{	 int count1=0;
		// count=0;
		if (arr[i] == z){
		for (int j = i; j < n ; ++j)
		{
			if(arr[j]==z){
			count1++;}
			else{
				break;
			}
		}
		count = max(count1, count);}
		// cout<<count<<endl;
	}

	return count;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int a[n];
		int b[n];

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		map<int, int>am;
		map<int, int>bm;


		am.insert({a[0],1});
		int count=1;
		int i = 1;
		for (int i = 1; i < n; ++i)
		{
			if(a[i]==a[i-1]){
				count++;

			}
			else{
				am[a[i-1]] = max(am[a[i-1]], count);
				// auto it:am;
				 auto it = am.find(a[i-1]);
				if(it!=am.end()){
					continue;
				}
				else{
					am.insert({a[i],1});
				}
				count = 1;
			}
		}
		am[a[n-2]] = max(am[a[n-2]], count);

		for(auto it:am){
			cout<<it.first<< " "<<it.second;
			cout<<endl;
		}
		cout<<endl;

		// vector<int>c;
		// for (int i = 1; i < 2*n+1; ++i)
		// {
		// 	 c.push_back(longest(i, a,n)+longest(i,b,n));
		// 	// cout<<c[i-1]<<" ";
		// }
		// // cout<<endl;

		// cout<<*max_element(c.begin(), c.end())<<endl;
		// sort(c,c+9);
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<c[i];
		// }
	}

}