#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];

		int counta0 = 0;
		int counta1 = 0;
		int countb0 = 0;
		int countb1 = 0;
		int ans=0;


		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]==0){
				counta0++;
			}
			if(a[i]==1){
				counta1++;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
			if(b[i]==0){
				countb0++;
			}
			if(b[i]==1){
				countb1++;
			}
		}
		int counter1 = max(counta0-countb0,countb0-counta0);
		// int counter1=0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(a[i]!=b[i]){
		// 		if(counta0!=countb0){
		// 			if(b[i]==0){
		// 				a[i]=b[i];
		// 				counta0++;
		// 				ans++;
		// 			}
		// 			if(b[i]==1){
		// 				a[i]=b[i];
		// 				counta1++;
		// 			}
		// 		}
		// 	}
		// }
		// cout<<ans;
		int counter=0;
		// cout<<counter1;
		int counterx=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]!=b[i]){
				counterx++;
			}
		}
		if(counter1>=-1){
			for (int i = 0; i < n; ++i)
			{
				if(a[i]!=b[i]){
					cout<<1+counter1-counterx<<endl;
					counter++;
					break;
					
				}
			}

			if(counter==0){
				cout<<0+counter1-counterx<<endl;
			}
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				if(a[i]!=b[i]){
					cout<<1<<endl;
					counter++;
					break;
					
				}
			}

			if(counter==0){
				cout<<0<<endl;
			}
		}

	}

	int main
}