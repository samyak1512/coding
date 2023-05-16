#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		string r=s;	
		for (ll i = 0; i < s.size(); ++i)
		{
			if((r[0]!=r[r.size()-1])){
				// if(r.size()>2)
					{
						r = r.substr(1,r.size()-2);
					}
				// else{
				// 	r="";
				// }
			}
			else{
				break;
			}
		}
		cout<<r.size()<<endl;

		
	}
}