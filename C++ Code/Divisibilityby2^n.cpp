#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int count=0;
		for (int i = 0; i < n; ++i)
		{
			int temp = arr[i];
			if(temp%2==0){
			    count++;
			    temp=temp/2;
			}
		}

		int sam = n-count;
		int hola = log2(n);
		int sam2 = hola*(hola+1)/2;
		int even;
		int odd;

		even=(n/2)-log2(n);
		if(sam2+even>=sam){
			
		}
		else{
			cout<<-1;
		}
		cout<<count<<endl;
	}
}