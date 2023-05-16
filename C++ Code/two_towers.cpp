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
		string s;
		cin>>s;
		string t;
		cin>>t;
		int count_b=0;
		int count_r=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='R'){
				count_r++;
			}
			if(s[i]=='B'){
				count_b++;
			}
		}
		for (int i = 0; i < m; ++i)
		{
			if(t[i]=='R'){
				count_r++;
			}
			if(t[i]=='B'){
				count_b++;
			}
		}
		//cout<<count_b;
		//cout<<count_r;
		int hola=0;
		if(n==1 && m==1){
			cout<<"yes"<<endl;
			hola=1;
			// return;
		}
		// else{

			if(hola==0){
				int flag1=0;
				int flag2=0;
				for (int i = 0; i < n-1; ++i)
				{
					if(s[i]==s[i+1]){
						flag1=1;
						// break;
					}
				}
				for (int i = 0; i < m-1; ++i)
				{
					if(t[i]==t[i+1]){
						flag2=1;
						// break;
					}
				}
				if(flag1 && flag2){
					cout<<"no"<<endl;
				}
				else if((n==1 && flag2)||(m==1 && flag1)){
					cout<<"no"<<endl;
				}
				else if(flag1 || flag2){
					if(s[n-1]==t[m-1]){
						cout<<"No"<<endl;
					}
					else
					{
						cout<<"yes"<<endl;
					}
				}
				// else if(flag2==1){
				// 	if(s[n-1]==t[m-1]){
				// 		cout<<"No"<<endl;
				// 	}
				// 	else
				// 	{
				// 		cout<<"yes"<<endl;
				// 	}

				// }
				
				else{
					cout<<"yes"<<endl;
				}
			// }
			// else{
			// 	cout<<"NO"<<endl;
			// }
		}
		
		// return 0;
	}

}