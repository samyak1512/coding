#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<int,int> m;
int fact(ll num){
	int x=1;
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if(!(num%i)){
			int c=0;
			while(num%i==0){
				c++;
				num = num/i;
			}
			m[i]=c;
			x=max(x,c);
		}
	}

	if(num!=1){
		m[num]=1;

	}

	return x;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0;
		int x = fact(n);
		for (int i = 0; i < x; ++i)
		{
			int temp=1;
			for(auto i:m){
				if(i.second>0){
					m[i.first]--;
					temp*=i.first;
				}
			}
			ans+=temp;
		}
		cout<<ans<<endl;
	}
}