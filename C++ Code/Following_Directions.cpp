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
		int x=0;
		int y=0;
		string s;
		cin>>s;
		int flag=0;

		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='L'){
				x=x-1;
			}
			else if(s[i]=='R'){
				x=x+1;
			}
			else if(s[i]=='U'){
				y=y+1;
			}
			else if(s[i]=='D'){
				y=y-1;
			}

			if(x==1 && y==1){
				flag=1;
				break;
			}
		}

		if(flag){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}