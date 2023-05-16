#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long ans = ((n+1)/2);
		cout<<((n+1)/2)<<endl;
		if(n==1){
			cout<<1<<" "<<2<<endl;

		}
		else if(n%2==0){
			for (long long i = 0; i < ans; ++i)
			{
				cout<<3+6*i<<" "<<4+6*i<<endl;
			}
		}
		else if(n%2!=0){
			for (long long i = 0; i < ans-1; ++i)
			{
				cout<<3+6*i<<" "<<4+6*i<<endl;
			}
			cout<<n*3-1<<" "<<n*3<<endl;
		}
	}
}