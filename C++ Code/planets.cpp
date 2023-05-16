#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int c;
		cin>>n>>c;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int max_orbit = *max_element(arr, arr + n);
		int max = n;
		int array[max_orbit+1];
		int count;
		for (int i = 0; i < max_orbit+1; ++i)
		{
			count = 0;
			for (int j = 0; j < n; ++j)
			{
				if (i==arr[j]){
					count++;
				}

			}

			array[i] = count;

		}
		

		int cost = 0;
		for (int i = 1; i < max_orbit+1; ++i)
		{
			if(array[i]>c){
				cost = cost+c;
			}
			else{
				cost = cost + array[i];
			}
		}
		cout<<cost<<endl;
		
		for (int i = 1; i < max_orbit+1; ++i)
		{	
			// cout<<array[i]<<" ";
		}

		// cout<<cost<<endl;
	}
}