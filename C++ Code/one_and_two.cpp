#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed multiplyArray(int arr[], int start, int end) {
    int result = arr[start];
    for (int i = start + 1; i <= end; i++) {
        result *= arr[i];
    }
    return result;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int count2=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(arr[i]==2){
			count2++;}
		}
		int i=0;
		int count = 0;
		if(count2%2==1){
			cout<<-1<<endl;
		}
		else if(count2==0){
			cout<<1<<endl;
		}
		
		else{
			for (i = 0; i < n; ++i)
			{
				if(arr[i]==2){
					count++;
				}
				if(count==(count2/2)){
					break;
				}
			}
			cout<<i+1<<endl;
		}

	}
}