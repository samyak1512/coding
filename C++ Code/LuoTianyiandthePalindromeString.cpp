#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag=0;
		for (int i = 0; i < s.size()-1; ++i)
		{
			if(s[i]!=s[i+1]){
				// cout<<s[i]<<" "<<s[i+1];
				flag=1;
				// break;
			}
			// cout<<endl;
		}

		if(flag==1){
			cout<<s.size()-1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}