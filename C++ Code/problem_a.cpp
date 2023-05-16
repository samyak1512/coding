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
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int flag=0;
		for (int i = 0; i < pow(2,8); ++i)
		{
			int b[n];
			for (int j = 0; j <n; ++j)
			{
				b[j] = a[j]^i;

			}
			int ans = 0;
			for (int k = 0; k <n ; ++k)
			{
				ans = ans ^ b[k];
			}

			if(ans==0){
				cout<<i<<endl;
				flag=1;
				break;
			}
			// else{
			// 	cout<<-1<<endl;
			// }


		}

		if(flag==0){
			cout<<-1<<endl;
		}
	}
}