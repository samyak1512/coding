#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n - (n / 2) + (n % 2)<<endl;
	}
}