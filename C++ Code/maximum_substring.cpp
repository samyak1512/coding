#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	long long t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll x1=0;
		ll y1=0;
		ll x=0;
		ll y=0;
		ll counter=0;
		ll counter1=0;
		for (ll i = 0; i < n; ++i)
		{
			if(s[i]=='0'){
				x++;
			}
			else{
				y++;
			}
		}


		for (ll i = 0; i < n; ++i)
		{	counter=0;
			while(i<n && s[i]=='0'){
				i++;
				counter++;
				// cout<<counter;
			}
			x1 = max(x1,counter);
			// cout<<endl;
			// cout<<x1;
		}


		for (ll i = 0; i < n; ++i)
		{	counter1=0;
			while(i<n && s[i]=='1'){
				i++;
				counter1++;
			}
			y1 = max(y1,counter1);
		}

		ll cost=0;
		ll cost1 = x*y;
		cost = max(pow(x1,2),pow(y1,2));
		cout<<max(cost,cost1)<<endl;
	}
}