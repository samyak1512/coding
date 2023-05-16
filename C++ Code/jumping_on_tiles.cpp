#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cost;
		int m;
		int n = s.length()-1;
		cost = (s[0])-(s[s.length()-1]);
		if (cost<0){
			cost = cost*-1;
		}
		cout<<cost<<endl;
		int largest = max((s[0]-96),(s[s.length()-1]-96));
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if(largest+96>=s[i]){
				count ++;
			}

		}

		
		cout<<count+1<<endl;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{	
			arr[i] = s[i];
		}

		    sort(arr, arr + n);

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]-96<<endl;
		}
	}
}