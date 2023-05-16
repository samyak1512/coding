#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		char c;
		cin>>c;
		int flag=0;
		string s = "codeforces";
		for (int i = 0; i < 10; ++i)
		{
			if(s[i]==c){
				flag=1;
			}
		}

		if(flag==1){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}