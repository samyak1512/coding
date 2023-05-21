#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int v[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v,v+n);
		int flag=0;
		if(v[0]%2==0){
			for (int i = 0; i < n; ++i)
			{
				if(v[i]%2!=0){
						flag=1;
						// cout<<"no"<<endl;
						// break;
				}	
			}


		}

		// else {
		// 		cout<<"yes"<<endl;
		// }

		if(flag==1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}