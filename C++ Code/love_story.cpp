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
		int count=0;
		string l = "codeforces";
		for (int i = 0; i < 11; ++i)
		{
			if(s[i]!=l[i]){
				count++;
			}
		}
		cout<<count<<endl;
	}
}