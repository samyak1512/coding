#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

int mostFrequent(int* arr, int n)
{
    
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
  
    return element_having_max_freq;
}
 

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int arr[n][n-1];
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n-1; ++j)
			{
				cin>>arr[i][j];
			}
		}
		int array[n];
		for (int i = 0; i < n; ++i)
		{
			array[i] = arr[i][0];
		}

		int f = mostFrequent(array, n);
		int row;
		for (i = 0; i < n; ++i)
		{
			if(arr[i][0]!=f){
				row = i;
				break;
			}
		}
		int sam[n];
		for (int i = 1; i < n; ++i)
		{
			sam[i] = arr[row][i-1];
		}
		sam[0] = f;

		for (int i = 0; i < n; ++i)
		{
			cout<<sam[i]<<" ";
		}
		cout<<endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<array[i];
		// }

		// for (i = 0; i < n-1; ++i)
		// {
		// 	for (j = 0; j < n-1; ++j)
		// 	{
		// 		cout<<arr[i][j];
		// 	}
		// }
		// cout<<endl;
	}
}