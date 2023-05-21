#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		// if(m==1){
		// 	cout<<"yes"<<endl;
		// }
		// else{
		// 	if(m>=n && n!=1){
		// 		cout<<"no"<<endl;
		// 	}
		// 	else if(__gcd(n,m)>1){
		// 		cout<<"no"<<endl;
		// 	}
		// 	else{
		// 		if(n%2==1){
		// 			cout<<"yes"<<endl;
		// 		}
		// 		else{
		// 			cout<<"no"<<endl;
		// 		}
		// 	}
		// }
		int flag=0;
		if(n==1||m==1){
			cout<<"yes"<<endl;
		}
		else{
			int rem;
			for (int i = 0; i < INT_MAX; ++i)
			{
				rem = n % m;
				m = rem;
				// cout<<m<<endl;
				if(m==0){
					flag=1;
					break;
					
				}
			}
			if (flag==1){
				cout<<"no"<<endl;
			}
			else{
				cout<<"yes"<<endl;
			}
		}
	}
}