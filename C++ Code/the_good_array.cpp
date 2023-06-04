#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		set<int>s1;
		set<int>s2;

		int flag=0;
		if(k==1){
			flag=1;

			cout<<n<<endl;
			
		}
		else if(k<=(n/2) || k==n-1 || k==n){
			for (int i = 0; i < n/2; ++i)
			{
				s1.insert(i/k+1);
			}

			for (int i = 0; i < n/2+1; ++i)
			{
				s2.insert(i/k+1);
			}

		}
		else{

			for (int i = 0; i < n/2; ++i)
			{
				s1.insert(i/k+1);
			}

			for (int i = 0; i < n/2+1; ++i)
			{
				s2.insert(i/k+1);
			}
			s2.insert(-1);



		}
			if(flag!=1){
			cout<<s1.size()+s2.size()<<endl;}
		}
	}
