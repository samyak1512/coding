#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for (int i = 0; i < n-1; ++i)
	{
		cin>>arr[i];
		
	}

	for (int i = 0; i < n-1; ++i)
	{
		if (arr[i] < arr[i+1])
		{
  			cout << i << endl;
  			count++;
		}
		else{
			count = 0;
		}

	}
	cout<<count;


}